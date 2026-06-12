int start = 4;
int stop = 16;
int nivel = 2;
int bomba = 19;
int EV = 22;

bool habilita = false;

void setup() {
  pinMode(start, INPUT_PULLUP);
  pinMode(stop, INPUT_PULLUP);
  pinMode(nivel, INPUT_PULLUP);

  pinMode(bomba, OUTPUT);
  pinMode(EV, OUTPUT);
}

void loop() {

  // Enable system when START button is pressed
  if (digitalRead(start) == LOW) {
    habilita = true;
  }

  // Disable system when STOP button is pressed
  if (digitalRead(stop) == LOW) {
    habilita = false;
  }

  // Execute control logic only if the system is enabled
  if (habilita) {

    // Low water level detected
    if (digitalRead(nivel) == LOW) {

      // Stop pump to prevent dry running
      digitalWrite(bomba, LOW);

      // Open filling valve
      digitalWrite(EV, HIGH);

    } else {

      // Water level is sufficient
      digitalWrite(bomba, HIGH);

      // Close filling valve
      digitalWrite(EV, LOW);
    }

  } else {

    // System disabled
    digitalWrite(bomba, LOW);
    digitalWrite(EV, LOW);
  }
}