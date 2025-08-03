String command = "";

void setup() {
  Serial.begin(9600);           // Start serial communication
  pinMode(8, OUTPUT);           // LED on pin 8
  digitalWrite(8, LOW);         // Start with LED OFF
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');  // Read command from Bluetooth
    command.trim();                          // Remove extra characters

    if (command == "ON") {
      digitalWrite(8, HIGH);  // Turn LED ON
    } 
    else if (command == "OFF") {
      digitalWrite(8, LOW);   // Turn LED OFF
    }
  }
}
