// RestSense - Hackathon Prototype
// ESP32-C3
// GPIO0 = Sensor 1
// GPIO1 = Sensor 2
// Reads sensor values and prints them to Serial Monitor

const int sensor1 = 0;
const int sensor2 = 1;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int value1 = analogRead(sensor1);
  int value2 = analogRead(sensor2);

  Serial.print("GPIO0 = ");
  Serial.print(value1);

  Serial.print("   GPIO1 = ");
  Serial.println(value2);

  delay(500);
}
