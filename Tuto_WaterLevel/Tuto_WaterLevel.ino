int Led = 13;
int valeurNivEau;

void setup()
{
  Serial.begin(9600);
  pinMode(Led, OUTPUT); 
}

void loop() {

  valeurNivEau = analogRead(A0);
  Serial.print("Valeur du capteur de niveau d'eau :");
  Serial.println(valeurNivEau);

  if(valeurNivEau >= 200) {
    digitalWrite(Led, HIGH);
  } else {
    digitalWrite(Led, LOW);
  }
  delay(100);
}
