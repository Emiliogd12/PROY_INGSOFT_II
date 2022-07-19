int ledPin = 13; // Se declara el pin para el led

int ldrPin = 0; // LDR en el pin analogico 0

int ldrValue = 0; // Se inicializa el valor del LDR en 0

 

void setup() {

  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);

}

void loop() {

  ldrValue = analogRead(ldrPin); //se da el valor a la variable según la lectura del LDR en el pin analógico 0

  Serial.println(ldrValue); //Se imprime el valor en monitor

  //Condicion para encender o apagar el led según la lectura del LDR
  if (ldrValue >= 100){   

    digitalWrite(ledPin,HIGH);

  }

  else {

    digitalWrite(ledPin,LOW);

  }

  delay(500);

}
