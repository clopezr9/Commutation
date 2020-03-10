#define suma 34
#define resta 35
#define automatic 37

byte display[10] = {63, 6, 0x5B, 0B01001111, 102, 109, 125, 7, 127, 103};

int contador = 0;
bool sum = 0;
bool res = 0;
int decenas, unidades;

void setup() {
  // put your setup code here, to run once:
  DDRL = 0B11111111;
  pinMode(suma, INPUT);
  pinMode(resta, INPUT);
  pinMode(automatic, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(suma) == LOW)sum = 1;
  delay(100);
  if (digitalRead(resta) == LOW)res = 1;
  delay(100);
  if (digitalRead(suma) == HIGH && sum == 1) {
    if (contador >= 10) contador = 0;
    contador++;
    sum = 0;
  } else if (digitalRead(resta) == HIGH && res == 1) {
    if (contador < 0) contador = 9;
    contador--;
    res = 0;
  } else if (digitalRead(automatic) == HIGH) {
    while (contador > 0) {
      PORTL = display[contador];
      contador--;
      delay(1000);
    }
    if (contador == 0) contador = 0;
  }

  PORTL = display[contador];
}
