// Definição do pino do buzzer
const int buzzerPin = 10; 

// Frequências das notas (em Hz) com novos nomes
const int NOTE_C4 = 261;
const int NOTE_D4 = 294;
const int NOTE_E4 = 329;
const int NOTE_F4 = 349;
const int NOTE_G4 = 392;
const int NOTE_A4 = 440;
const int NOTE_B4 = 493;
const double NOTE_C5 = 523.25;

void setup() {
  pinMode(buzzerPin, OUTPUT); // Configura o pino do buzzer como saída
}

void loop() {
  
  //
  tone(buzzerPin, NOTE_G4, 500); // Nota Mi4
  delay(750); // Tempo entre notas
  
  tone(buzzerPin, NOTE_F4, 500); // Nota Ré4
  delay(250);
  
  tone(buzzerPin, NOTE_E4, 500); // Nota Dó4
  delay(250);
  
  tone(buzzerPin, NOTE_D4, 500); // Nota Ré4
  delay(250);
  
  tone(buzzerPin, NOTE_E4, 500); // Nota Dó4
  delay(250);
  
  tone(buzzerPin, NOTE_F4, 500); // Nota Ré4
  delay(250);
  
  tone(buzzerPin, NOTE_G4, 500); // Nota Mi4
  delay(750);
  
  tone(buzzerPin, NOTE_G4, 400); // Nota Mi4
  delay(500);
 
  tone(buzzerPin, NOTE_G4, 250); // Nota Mi4
  delay(750);
  
  //
  
  tone(buzzerPin, NOTE_A4, 500); // Nota Dó4
  delay(250);
  
  tone(buzzerPin, NOTE_G4, 500); // Nota Ré4
  delay(250);
  
  tone(buzzerPin, NOTE_F4, 500); // Nota Mi4
  delay(750);
  
  tone(buzzerPin, NOTE_F4, 400); // Nota Mi4
  delay(500);
  
  tone(buzzerPin, NOTE_F4, 250); // Nota Mi4
  delay(750);
  
  //
  
  tone(buzzerPin, NOTE_G4, 500); // Nota Dó4
  delay(250);
  
  tone(buzzerPin, NOTE_F4, 500); // Nota Ré4
  delay(250);
  
  tone(buzzerPin, NOTE_E4, 500); // Nota Mi4
  delay(750);
  
  tone(buzzerPin, NOTE_E4, 400); // Nota Mi4
  delay(500);
  
  tone(buzzerPin, NOTE_E4, 250); // Nota Mi4
  delay(750);
  
  //
  
  tone(buzzerPin, NOTE_C4, 250); // Nota Dó4
  delay(250);
  
  tone(buzzerPin, NOTE_C4, 250); // Nota Ré4
  delay(250);
  
  tone(buzzerPin, NOTE_A4, 500); // Nota Mi4
  delay(750);
  
  tone(buzzerPin, NOTE_A4, 400); // Nota Mi4
  delay(500);
  
  tone(buzzerPin, NOTE_A4, 250); // Nota Mi4
  delay(750);
  
  //
  
  tone(buzzerPin, NOTE_B4, 500); // Nota Dó4
  delay(250);
  
  tone(buzzerPin, NOTE_A4, 500); // Nota Ré4
  delay(250);
  
  tone(buzzerPin, NOTE_G4, 500); // Nota Mi4
  delay(750);
  
  tone(buzzerPin, NOTE_G4, 400); // Nota Mi4
  delay(500);
  
  tone(buzzerPin, NOTE_G4, 250); // Nota Mi4
  delay(750);
  
  //
  tone(buzzerPin, NOTE_E4, 250); // Nota Dó4
  delay(250);
  
  tone(buzzerPin, NOTE_F4, 250); // Nota Ré4
  delay(250);
  
  tone(buzzerPin, NOTE_G4, 250); // Nota Mi4
  delay(500);
  
  tone(buzzerPin, NOTE_E4, 250); // Nota Dó4
  delay(250);
  
  tone(buzzerPin, NOTE_F4, 250); // Nota Ré4
  delay(250);
  
  tone(buzzerPin, NOTE_G4, 250); // Nota Mi4
  delay(250);
  
  tone(buzzerPin, NOTE_F4, 250); // Nota Mi4
  delay(250);
  
  tone(buzzerPin, NOTE_E4, 250); // Nota Mi4
  delay(250);
  
  tone(buzzerPin, NOTE_D4, 250); // Nota Mi4
  delay(250);
  
  tone(buzzerPin, NOTE_C4, 500); // Nota Mi4
  delay(250);
  
  tone(buzzerPin, NOTE_C5, 1000); // Nota Mi4
  delay(500);
  
  tone(buzzerPin, NOTE_C5, 250); // Nota Mi4
  delay(250);
  
  
  // Pausa final
  noTone(buzzerPin);
  delay(2000); // Espera antes de repetir a melodia
}