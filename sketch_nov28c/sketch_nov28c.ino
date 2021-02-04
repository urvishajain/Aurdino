int a = -8;
void setup() {
  Serial.begin(9600);

}

void loop() {
  a = -a;
  Serial.println(a);
  delay(400);
}
