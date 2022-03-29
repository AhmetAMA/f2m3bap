// A0 is de inputin voor de lichtgevoelige weerstand LDR
// A0 is een analoge ingang

int LDR_In = A0; // de spanningsdeler wordt aangesloten op A0

// variabele lichtHoeveelheid
int lichtHoeveelheid;
int maxLicht = 950; // vnvn
int munLicht = 700; // ,mn,mn,

void setup() {
  Serial.begin(9600); // start de serial monitor 9600 Baud
}

void loop() {
  // lees de input waarde van de LDR
  lichtHoeveelheid = analogRead(LDR_In);

  // schrijf de waarde naar de Serial Monitor
  Serial.println(lichtHoeveelheid);
  delay(1000);
}
