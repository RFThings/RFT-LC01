# RFT-LC01
RFT-LC01 is a RF Kit designed by [RFThings Vietnam](https://www.rfthings.com.vn) for integrating into antennas, especially [RT-CP3-BL RFThings Edition](https://rfthings.com.vn/product/rt-cp3-bl-rfthings-edition/).

## Hardware:
- <b>MCU</b>: MicroChip ATMega328P-AU
- <b>LoRa</b>: HopeRF RFM95W
- <b>RGB LEDs</b>: WS2812-2020
- <b>Accelerometer</b>: Kionix KX023-1025

## Installing
1. [Download and install the Arduino IDE](https://www.arduino.cc/en/software)
2. Start the Arduino IDE
3. Connect the <b>RFT-LC01 Kit</b> to your computer via a Micro-USB cable
4. Select Board settings in <b>Tool Menu</b> as the below table:

| <b>Setting</b> | <b>Value</b>                                 |
|----------------|----------------------------------------------|
| Board          | Arduino Pro or Pro Mini                      |
| Processor      | ATMega328P (3.3V, 8MHz)                      |
| Port           | <i>The COM port that your LC01 connected to</i> |

5. Start writting your code :)

## Additional Libraries
</i>Coming soon...</i>
- [RFM95/LoRa Library](https://github.com/sandeepmistry/arduino-LoRa)
- [WS2012B](https://github.com/adafruit/Adafruit_NeoPixel)
- [KX023-1025](https://github.com/dlyckelid/KX023-1025-IMU/) (<i>This repository still has some bugs, need further developing</i>)

## Known issues/To-do
- [ ] Remove Micro-USB connector pad bottom solder clearance
- [ ] Remove to level shifter on RGB LEDs for lowering the power consumption

## Support
Please contact us at <support@rfthings.com.vn>