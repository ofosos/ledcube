/*
  shift test
  Test layer control on my 4x4x4 led cube. Layer transistors are directly connect to pin 0-3
 
  pin 0 - output enable
  pin 1 - clock
  pin 2 - data
 
  This code is in the public domain.
 */
 
int cnt = 0;

void setup() {
  DDRD = 0x7;
  PORTD = 0x0;
}

void loop() {
  int x = cnt;
  
  digitalWrite(0, 0); // disable output
  
  digitalWrite(2,x); // write 1-bit data
  
  digitalWrite(1, 1); // clock pulse
  digitalWrite(1, 0);
  
  digitalWrite(0, 1); // enable output
  
  cnt = ~ cnt;
  
  delay(500);
}
