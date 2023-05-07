// #include <Keyboard.h>
const int LED_PIN = 2; // LED connected to GPIO2


void setup() {
  // Keyboard.begin();

  // wait for the computer to recognize the keyboard
  delay(2000);
  pinMode(LED_PIN, OUTPUT); // set the LED pin as an output
  digitalWrite(LED_PIN, LOW); // turn off the LED

  // inputting the password
  // Keyboard.write(0x96);

  delay(1000);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // turn on the LED
  delay(1000); // wait for 1 second
  digitalWrite(LED_PIN, LOW); // turn off the LED
  delay(1000); // wait for 1 second
  digitalWrite(LED_PIN, HIGH); // turn on the LED
  delay(500); // wait for half a second
  digitalWrite(LED_PIN, LOW); // turn off the LED
  delay(500); // wait for half a second
}
