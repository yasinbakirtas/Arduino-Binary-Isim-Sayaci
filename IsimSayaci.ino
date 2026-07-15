#define ileri 10
#define geri 11
#define enter 12

int sayac = 0;

void convert(int i)
{
  byte a = i % 2;
  byte b = (i / 2) % 2;
  byte c = (i / 4) % 2;
  byte d = (i / 8) % 2;
  byte e = (i / 16) % 2;
  byte f = (i / 32) % 2;
  byte g = (i / 64) % 2;
  byte h = (i / 128) % 2;

  digitalWrite(2, !a);
  digitalWrite(3, !b);
  digitalWrite(4, !c);
  digitalWrite(5, !d);
  digitalWrite(6, !e);
  digitalWrite(7, !f);
  digitalWrite(8, !g);
  digitalWrite(9, !h);

  Serial.print("Sayi = ");
  Serial.println(i);
  delay(300);
}

void setup() {
  for(byte led_pin = 2; led_pin < 10; led_pin++)
  {
    pinMode(led_pin, OUTPUT);
    digitalWrite(led_pin, HIGH);
  }

  pinMode(ileri, INPUT_PULLUP);
  pinMode(geri, INPUT_PULLUP);
  pinMode(enter, INPUT_PULLUP);

  Serial.begin(9600); 
  Serial.println("Lutfen Tekrar Sayisini Giriniz.");
}

void loop() {
  if(digitalRead(ileri) == LOW && sayac < 255)
  {
    sayac++;
    convert(sayac);
  }

  if(digitalRead(geri) == LOW && sayac > 0)
  {
    sayac--;
    convert(sayac);
  }

  if(digitalRead(enter) == LOW)
  {
    for(int i = 0; i < sayac; i++)
    {
      Serial.print(i + 1);
      Serial.println(". Yasin ");
    }
    Serial.println();

    sayac = 0;
    convert(sayac);
    delay(300);
  }
}
