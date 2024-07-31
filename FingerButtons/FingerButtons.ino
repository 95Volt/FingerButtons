/**
 * Based on the ESP32-BLE-Mouse Example
 */
#include <BleMouse.h>
#define LEFT_CLICK_PIN 17     // Change to whatever pin the button is connected to
// Previous and current state for the while loop
int lastState = HIGH;        
int currentState;  

BleMouse bleMouse;

void setup() {
  pinMode(LEFT_CLICK_PIN, INPUT_PULLUP);
  bleMouse.begin();
}

void loop() {
  if(bleMouse.isConnected()) {
    currentState = digitalRead(LEFT_CLICK_PIN);
    if(lastState == LOW && currentState == HIGH)
      bleMouse.release(MOUSE_LEFT);
    if(lastState == HIGH && currentState == LOW)
      bleMouse.press(MOUSE_LEFT);
    // bleMouse.click not appropriate for VR-Sim, because you need
    // a button hold for certain interactions (e.g. Flaps)
    lastState = currentState;
  }
}








