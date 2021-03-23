#include <SPI.h>
#include <LoRa.h> // http://librarymanager/All#LoRa install libray by Sandeep Mistry

#define SENDER 1 // Set to 0 for receiver

void setup(void)
{
    Serial.begin(9600);
    while ((!Serial) || (millis() < 5000))
    {
    }
    Serial.println("========== RFT-LC01 LoRa Example ==========");

    LoRa.setPins(10, 8, 3);
    if (!LoRa.begin(923E6))
    {
        Serial.println("Starting LoRa failed!");
        while (1)
        {
        }
    }
}

void loop(void)
{
#if SENDER == 1
    LoRa.beginPacket();
    LoRa.print("hello world");
    LoRa.endPacket();

    delay(5000);
#else // Receiver
    int packetSize = LoRa.parsePacket();
    if (packetSize > 0)
    {
        // received a packet
        Serial.print("Received packet '");

        // read packet
        while (LoRa.available())
        {
            Serial.print((char)LoRa.read());
        }

        // print RSSI of packet
        Serial.print("' with RSSI ");
        Serial.println(LoRa.packetRssi());
    }
#endif
}
