// Numéro des pattes commandant les moteurs
int VITESSE_MOTEUR_DROIT = 5;
int DIRECTION_MOTEUR_DROIT = 4;
int VITESSE_MOTEUR_GAUCHE = 6;
int DIRECTION_MOTEUR_GAUCHE = 7;
// Constantes pour la direction des moteurs
int AVANT = 0;
int ARRIERE = 1;

// HIGH = blanc et LOW = noir
int CAPTEUR_LIGNE_DROIT = 10;
int CAPTEUR_LIGNE_GAUCHE = 9;
int NOIR = LOW;
int BLANC = HIGH;

void setup() {
  // configuration des pattes des moteurs
  pinMode(VITESSE_MOTEUR_DROIT, OUTPUT);
  pinMode(DIRECTION_MOTEUR_DROIT, OUTPUT);
  pinMode(VITESSE_MOTEUR_GAUCHE, OUTPUT);
  pinMode(DIRECTION_MOTEUR_GAUCHE, OUTPUT);
  // Configuration les pattes du capteur de ligne
  pinMode(CAPTEUR_LIGNE_DROIT, INPUT);
  pinMode(CAPTEUR_LIGNE_GAUCHE, INPUT);
  // on doit appuyer sur le bouton pour démarrer
  while (analogRead(7) > 512) {
  }
}

void loop() {
  if ( (digitalRead(CAPTEUR_LIGNE_DROIT)==NOIR) && (digitalRead(CAPTEUR_LIGNE_GAUCHE)==NOIR) ) {
    moteurDroit(200, AVANT);
    moteurGauche(200, AVANT);
  }
  else if ( (digitalRead(CAPTEUR_LIGNE_DROIT)==BLANC) && (digitalRead(CAPTEUR_LIGNE_GAUCHE)==NOIR) ) {
    moteurDroit(200, AVANT);
    moteurGauche(200, ARRIERE);
  }
  else if ( (digitalRead(CAPTEUR_LIGNE_DROIT)==NOIR) && (digitalRead(CAPTEUR_LIGNE_GAUCHE)==BLANC) ) {
    moteurDroit(200, ARRIERE);
    moteurGauche(200, AVANT);
  }
  else {
    moteurDroit(200, ARRIERE);
    moteurGauche(200, AVANT);
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
