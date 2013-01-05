/*
  shift test
  Test shift register. Connected 4 blue leds to the outputs of an 74hc595.
 
  pin 0 - output enable
  pin 1 - clock
  pin 2 - data
 
  This code is in the public domain.
 */
 
int cnt = 0;

void setup() {
  DDRD = 0x7;
  PORTD = 0x1;
}

void loop() {
  int x = cnt;
  
  digitalWrite(0, 1); // disable output
  
  digitalWrite(2,x); // write 1-bit data
  
  digitalWrite(1, 1); // clock pulse
  digitalWrite(1, 0);
  
  digitalWrite(0, 0); // enable output
  
  cnt = ~ cnt;
  
  delay(500);
}
