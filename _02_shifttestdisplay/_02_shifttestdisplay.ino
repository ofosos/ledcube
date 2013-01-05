/*
  shift test
  Test shift register. Connected 4 blue leds to the outputs of an 74hc595.
 
  pin 0 - output enable
  pin 1 - clock
  pin 2 - data
 
  This sketch test what will become the main display routine for a layer.
 
  This code is in the public domain.
 */
 
int cnt = 0;
int pat = 0;

void setup() {
  DDRD = 0x7;
  PORTD = 0x1;
}

void display() {
  digitalWrite(0, 1); // disable output

  for (int i = 0; i < 4; i++) {
    digitalWrite(2,(pat >> i) & 0x1); // write 1-bit data
  
    digitalWrite(1, 1); // clock pulse
    digitalWrite(1, 0);
  }
  
  digitalWrite(1, 1); // clock pulse, because the output register lags behing the 
  digitalWrite(1, 0);

  digitalWrite(0, 0); // enable output
}

void loop() {
  pat = 1 << cnt;
  
  display();

  cnt ++;
  cnt = cnt % 4;
  
  delay(500);
}
