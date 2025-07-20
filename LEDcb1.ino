const int pinPot = A0;
const int pinLed = 9; // dipasang pada pin ~9 dsb jika ingin LED mati/nyala perlahan bisa diganti ke pin 8 dsb jika ingin LED matinyala langsung
int nilaiPot = 0; // berfungsi menampung nilai analog dari pin A0
int kecerahan;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinPot, INPUT);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  nilaiPot = analogRead(pinPot);// menyimpan nilai pinPot(A0) ke variabel nilai pot
  kecerahan = map(nilaiPot, 0, 1023, 0, 255);
  Serial.println(kecerahan);
  analogWrite(pinLed, kecerahan);
}
