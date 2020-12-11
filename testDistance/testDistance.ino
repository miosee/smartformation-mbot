int PATTE_DISTANCE = 17;

void setup() {
  pinMode(PATTE_DISTANCE, INPUT);
  Serial.begin(9600);
}

void loop() {
  float duree, distance;
  
  pinMode(PATTE_DISTANCE, OUTPUT);
  digitalWrite(PATTE_DISTANCE, HIGH);
  delayMicroseconds(10);
  digitalWrite(PATTE_DISTANCE, LOW);
  pinMode(PATTE_DISTANCE, INPUT);
  duree = pulseIn(PATTE_DISTANCE, HIGH, 18000);
  Serial.print("Durée mesurée : ");
  Serial.println(duree);
  distance = duree * 340/20000;
  Serial.print("Distance mesurée (cm) : ");
  Serial.println(distance);
  delay(1000);
}
