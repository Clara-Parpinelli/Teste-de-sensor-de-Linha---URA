#include <Servo.h> // Biblioteca do Servo

Servo servo01E;  // Objeto Servo superior Esquerdo
Servo servo01D;  // Objeto Servo superior Direito
Servo servo02E;  // Objeto Servo inferior Esquerdo
Servo servo02D;  // Objeto Servo infeior Direito
int ang = 0;    // Variável Ângulo

int SensorD = 6; // Sensor de linha Direito
int SensorE = 13;  // Sensor de linha Esquerdo

void setup() {
  servo01E.attach(2);  // Pino usado para conectar o servo superior Esquerdo
  servo01D.attach(3);  // Pino usado para conectar o servo superior Direito
  servo02E.attach(4);  // Pino usado para conectar o servo inferior Esquerdo
  servo02D.attach(5);  // Pino usado para conectar o servo inferior Direito
  pinMode(SensorD, INPUT);
  pinMode(SensorE, INPUT);
}

void loop() {
  if(digitalRead(SensorE) == HIGH && digitalRead(SensorD) == HIGH){ // detectou a linha preta nos dois sensores
    for (ang = 0; ang <= 180; ang += 1) { // Vai de 0º até 180º
    // Comando que envia o sinal para o servo rotacionar
      servo01E.write(ang);
      servo01D.write(ang);
      servo02E.write(ang);
      servo02D.write(ang);
      delay(500);   // Espera 500ms 
    }
    for (ang = 180; ang >= 0; ang -= 3) { // Vai de 180º até 0º (+ rápido)
      // Comando que envia o sinal para o servo rotacionar
      servo01E.write(ang);
      servo01D.write(ang);
      servo02E.write(ang);
      servo02D.write(ang);
      delay(500);   // Espera 500ms 
    }
  }else if(digitalRead(SensorE) == LOW && digitalRead(SensorD) == HIGH) {// detectou a linha preta na direita
    for (ang = 0; ang <= 180; ang += 1) { // Vai de 0º até 180º
    // Comando que envia o sinal para o servo rotacionar
      servo01E.write(ang);
      servo02E.write(ang);
      delay(500);   // Espera 500ms 
    }
    for (ang = 180; ang >= 0; ang -= 3) { // Vai de 180º até 0º (+ rápido)
      // Comando que envia o sinal para o servo rotacionar
      servo01E.write(ang);
      servo02E.write(ang);
      delay(500);   // Espera 500ms 
    }
  }else if(digitalRead(SensorE) == HIGH && digitalRead(SensorD) == LOW) { // detectou a linha preta na esquerda
      servo01D.write(ang);
      servo02D.write(ang);
      delay(500); // Espera 500ms  
  }
}




/*
  for (ang = 0; ang <= 180; ang += 1) { // Vai de 0º até 180º
    // in steps of 1 degree
    meuservo.write(ang);              // Comando que envia o sinal para o servo rotacionar
    delay(15);                       // Espera 15ms 
  }
  for (ang = 180; ang >= 0; ang -= 3) { // Vai de 180º até 0º (+ rápido)
    meuservo.write(ang);              // Comando que envia o sinal para o servo rotacionar
    delay(15);                       // Espera 15ms 
  }
*/