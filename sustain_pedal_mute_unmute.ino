/*this is code to convert a sustain pedal into a 
 * button to mute or unmute ur mic in google meet  
 * 
 * connet the two ends of the buttons to gnd and pin 2 
 * 
 * made by - shlok chaudhari :)
 * feel free to edit the code 
 */
 
 
 #include "Keyboard.h"
 char ctrlKey = KEY_LEFT_CTRL;

void setup() {

  pinMode(2, INPUT_PULLUP);

  Keyboard.begin();
}

void loop() {

  if (digitalRead(2) == HIGH) {
Keyboard.press(ctrlKey);
Keyboard.press('d'); // you can edit any other alphabet for eg-n to onen new file 

  delay(100);
  Keyboard.releaseAll();
    
    
  }
