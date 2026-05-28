const int ledPin1 = 13; // Pin connected to the anode of LED 1
const int ledPin2 = 12; // Pin connected to the anode of LED 2
const int ledPin3 = 11; // Pin connected to the anode of LED 3

void setup() {
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT); 
}

void loop() {
  digitalWrite(ledPin1, HIGH); // Turn LED 1 on
  delay(1000); // Wait for 1 second
  digitalWrite(ledPin1, LOW); // Turn LED 1 off
  
  digitalWrite(ledPin2, HIGH); // Turn LED 2 on
  delay(1000); // Wait for 1 second
  digitalWrite(ledPin2, LOW); // Turn LED 2 off
  
  digitalWrite(ledPin3, HIGH); // Turn LED 3 on
  delay(1000); // Wait for 1 second
  digitalWrite(ledPin3, LOW); // Turn LED 3 off
}