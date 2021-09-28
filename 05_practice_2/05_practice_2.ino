#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
}
void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  for (int i = 0; i < 10; i++) {
    int toggle = 1 - (i % 2);
    digitalWrite(PIN_LED, toggle);
    delay(100);
  }
  while(1){digitalWrite(PIN_LED, 1);} // infinite loop
}
