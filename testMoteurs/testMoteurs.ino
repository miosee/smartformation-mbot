// Numéro des pattes commandant les moteurs
int VITESSE_MOTEUR_DROIT = 5;
int DIRECTION_MOTEUR_DROIT = 4;
int VITESSE_MOTEUR_GAUCHE = 6;
int DIRECTION_MOTEUR_GAUCHE = 7;
// Constantes pour la direction des moteurs
int AVANT = 0;
int ARRIERE = 1;


void setup() {
  // configuration des pattes des moteurs
  pinMode(VITESSE_MOTEUR_DROIT, OUTPUT);
  pinMode(DIRECTION_MOTEUR_DROIT, OUTPUT);
  pinMode(VITESSE_MOTEUR_GAUCHE, OUTPUT);
  pinMode(DIRECTION_MOTEUR_GAUCHE, OUTPUT);
}

void loop() {
  if (analogRead(7) < 512) {
    moteurDroit(100, AVANT);
    delay(2000);
    moteurDroit(0, AVANT);
  
    moteurGauche(100, AVANT);
    delay(2000);
    moteurGauche(0, AVANT);
  }
}

void moteurDroit(int vitesse, int direction) {
  if (direction == AVANT) {
    digitalWrite(DIRECTION_MOTEUR_DROIT, HIGH);
  } else {
    digitalWrite(DIRECTION_MOTEUR_DROIT, LOW);
  }
  analogWrite(VITESSE_MOTEUR_DROIT, vitesse);
}

void moteurGauche(int vitesse, int direction) {
  if (direction == AVANT) {
    digitalWrite(DIRECTION_MOTEUR_GAUCHE, LOW);
  } else {
    digitalWrite(DIRECTION_MOTEUR_GAUCHE, HIGH);
  }
  analogWrite(VITESSE_MOTEUR_GAUCHE, vitesse);
}
