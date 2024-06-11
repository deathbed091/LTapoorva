// Include the ESP8266WiFi library

// Define the GPIO pin connected to the LED
#define LED_PIN 2

void setup() {
  // Set the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH)
  digitalWrite(LED_PIN, HIGH);
  
  // Wait for 1 second
  delay(1000);
  
  // Turn the LED off (LOW)
  digitalWrite(LED_PIN, LOW);
  
  // Wait for another 1 second
  delay(1000);
}