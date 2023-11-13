
void setup() {

  Serial.begin(1200);  // Inizia la comunicazione seriale a 1200 bps

}
 
void loop() {

  if (Serial.available() > 0) {

    char dato = Serial.read();

    Serial.write(dato);

  }

}
