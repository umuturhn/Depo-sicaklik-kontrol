int lm35Pin = A0;
int okunan_deger = 0;
float sicaklik_gerilim = 0;
float sicaklik = 0;
void setup()
{
Serial.begin(9600);
}
void loop()
{
okunan_deger = analogRead(lm35Pin);
sicaklik_gerilim = (okunan_deger / 1023.0)*5000;
sicaklik = sicaklik_gerilim /10.0;
Serial.println(sicaklik);
}
