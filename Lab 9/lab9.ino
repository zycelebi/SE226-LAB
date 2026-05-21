#define LED0 43
#define LED1 44
#define LED2 45
#define LED3 46

#define SW0 38
#define SW1 39
#define SW2 40
#define SW3 41

int ledPins[4] = {LED0, LED1, LED2, LED3};
int btnPins[4] = {SW0,  SW1,  SW2,  SW3};

byte lastBtnState[4] = {LOW,  LOW,  LOW,  LOW};
byte ledState[4]     = {LOW,  LOW,  LOW,  LOW};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(btnPins[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    byte current = digitalRead(btnPins[i]);

    if (current != lastBtnState[i]) {
      lastBtnState[i] = current;

      if (current == LOW) {
        ledState[i] = (ledState[i] == HIGH) ? LOW : HIGH;
        digitalWrite(ledPins[i], ledState[i]);
      }
    }
  }
}
