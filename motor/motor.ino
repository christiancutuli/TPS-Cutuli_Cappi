const int pinRx = 2; // Il pin digitale a cui è collegato il segnale di ricezione (TX dell'Arduino di invio)
char byteInArrivo = 0; // Variabile per memorizzare il byte ricevuto
char byteRicevuto[8]; // Array per memorizzare i 8 bit ricevuti
int bitIndex = 0; // Indice del bit attualmente in lettura
 
void setup() {
  Serial.begin(1200); // Inizia la comunicazione seriale a 1200 bps
  pinMode(pinRx, INPUT); // Configura il pinRx come ingresso
}
 
void loop() {
  byteInArrivo = 0; // Resetta il byte ricevuto
  bitIndex = 0; // Resetta l'indice del bit
  while (digitalRead(pinRx) == HIGH) {} // Aspetta il bit di start (stato LOW)
  delayMicroseconds(520); // Campionamento al centro del bit (tolleranza inclusa)
  while (bitIndex < 8) {
    byteInArrivo |= (digitalRead(pinRx) << bitIndex); // Leggi il bit corrente e memorizzalo
    bitIndex++;
    delayMicroseconds(1040); // Campionamento al centro del bit successivo (tolleranza inclusa)
  }
  Serial.write(byteInArrivo); // Invia il byte ricevuto sulla porta seriale
}
