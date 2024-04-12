#define pinSensor1 7

void setup() {
  pinMode(pinSensor1, INPUT);
  Serial.begin(9600)

}

void loop() {
  bool estadoSensor1 = digitalRead(pinSensor1);
  
  if (estadoSensor1){
    Serial.println("Preto (ou nada)")
  }else{
    Serial.println("Branco (diferente de preto)")
  }

}
