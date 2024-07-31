# FingerButtons - WIP!
FingerButtons is an implementation of the ESP32 BLE Mouse library on a ESP32-WROOM-32D Board. The main use is for VR applications, e.g. flight simulators, to control buttons in the VR environment. The idea came from [roosterhands](https://github.com/sielu-rooster/roosterhands).
The roosterhands author uses a Espruino (JS) implementation. Since the better availability of cheap ESP32-WROOM boards I chose to adapt the idea using a ESP32-WROOM and Arduino.

## Prerequisites
- [fingers](https://github.com/glenmurphy/fingers)
- A Leap Motion Controller
- A bluetooth controller for your computer
- The [Gemini](https://leap2.ultraleap.com/downloads/) Software
- A supported ESP32 Microcontroller. Compatibility list [here](https://github.com/espressif/arduino-esp32#installation-instructions)



## How to install
You need two things to flash this code to your ESP32:
-  Install the [Arduino IDE](https://www.arduino.cc/en/software)
-  Install the [ESP32-BLE-Mouse Library](https://github.com/T-vK/ESP32-BLE-Mouse)

After you followed the instructions on the ESP32-BLE-Mouse github page, flash the ESP32 with the provided code in this repo.

## Hardware and 3D parts
Since my implementation will be used in a flight simulator which is used by a variety of people, the solution provided from [Roosterhands](https://github.com/sielu-rooster/roosterhands) with hardware glued on gloves didn't satisfy my requirements. I needed something applicable for different hand sizes. My approch to this was a button base which is attachable to a ring. The ring is printed in TPU and comes in different sizes.
The button base is, for now, a cutted out breadboard. Ordinary and cheap microswitches are used. 


## Future
There is still some work to do for a immersive VR experience.
In Progress:
- Unfortunately, X-Plane resets the mouse pointer when moving the head even slightly.
- The moving mouse pointer while flying is sometimes annoying. A solution would be to hide the mouse pointer when it's not in use.

