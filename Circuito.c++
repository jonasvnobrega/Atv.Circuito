const int led = 13;
const int ldr = 0;

int valor_lido = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valor_lido = analogRead(ldr);
  Serial.println(valor_lido);

  if (valor_lido < 100) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(1000);
}
