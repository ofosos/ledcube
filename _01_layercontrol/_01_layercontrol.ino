/*
  layertest
  Test layer control on my 4x4x4 led cube. Layer transistors are directly connect to pin 0-3
 
  This code is in the public domain.
 */
 
int cnt = 0;

void setup() {
  DDRD = B00001111;
}

void loop() {
  int x = 1<<cnt;
  PORTD = x;
  
  cnt ++;
  cnt = cnt & 0xF;
  
  delay(500);
}
