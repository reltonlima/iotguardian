#define PIR_PIN    27
#define LED_PIN    2
#define BUZZER_PIN 26

void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("Aguardando estabilizacao do PIR...");
  delay(10000); // tempo de estabilizacao do PIR
  Serial.println("PIR pronto");
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH) {
    Serial.println("MOVIMENTO DETECTADO");

    digitalWrite(LED_PIN, HIGH);      // LED acende
    digitalWrite(BUZZER_PIN, HIGH);   // Buzzer liga
  } else {
    Serial.println("Sem movimento");

    digitalWrite(LED_PIN, LOW);       // LED apaga
    digitalWrite(BUZZER_PIN, LOW);    // Buzzer desliga
  }

  delay(300);
}
