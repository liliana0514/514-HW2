#include <Arduino.h>

const int analogPin = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Read the analog value from pin A0
  int analogValue = analogRead(analogPin);

  // Convert the analog value to voltage (assuming 3.3V reference)
  float voltage = analogValue * (5 / 4095.0);

  // Display the voltage value
  Serial.print("Analog Value: ");
  Serial.print(analogValue);
  Serial.print(", Voltage: ");
  Serial.println(voltage);

  delay(1000);  // You can adjust the delay based on your needs
}


