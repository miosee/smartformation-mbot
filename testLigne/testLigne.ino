int CAPTEUR_LIGNE_DROIT = 10;
int CAPTEUR_LIGNE_GAUCHE = 9;

void setup() {
  // Configuration les pattes du capteur de ligne
  pinMode(CAPTEUR_LIGNE_DROIT, INPUT);
  pinMode(CAPTEUR_LIGNE_GAUCHE, INPUT);
  // Configuration du port série
  Serial.begin(9600);
}

void loop() {
  Serial.print("Etat du capteur droit : ");
  if (digitalRead(CAPTEUR_LIGNE_DROIT) == HIGH) {
    Serial.println("haut");
  } else {
    Serial.println("bas");
  }
  Serial.print("Etat du capteur gauche : ");
  if (digitalRead(CAPTEUR_LIGNE_GAUCHE) == HIGH) {
    Serial.println("haut");
  } else {
    Serial.println("bas");
  }
  delay(1000);
}
