int timer = 100;                   // Quanto maior, mais devagar.
int pins[] = { 3, 5, 6}; // vetor com o número dos pinos
int num_pins = 3;                  // quantidade de LEDs (tamanho do vetor)

void setup()
{
  int i;

  for (i = 0; i < num_pins; i++)   // elementos do vetor vão de 0 a num_pins - 1
    pinMode(pins[i], OUTPUT);      // configurar cada pino como saída
}

void loop()
{
  int i;

  for (i = 0; i < num_pins; i++) { // varrer cada pino...
    digitalWrite(pins[i], HIGH);   // ligando-o,
    delay(timer);                  // pausando-o,
    digitalWrite(pins[i], LOW);    // e desligando-o.
  }
  for (i = num_pins - 1; i >= 0; i--) { 
    digitalWrite(pins[i], HIGH);
    delay(timer);
    digitalWrite(pins[i], LOW);
  }
}


