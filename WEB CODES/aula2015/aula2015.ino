int verde = 5;
int vrecebido = -2;
int ldr = 0;
int leitura; 

void setup() {
    pinMode(verde, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  
   
    if (Serial.available() > 0) {
        vrecebido = Serial.read();
    }
   
    if (vrecebido > 0) {
        if (vrecebido == '1'){
            digitalWrite(verde, HIGH);
            //Serial.print(HIGH);
            delay(300);
        } else if (vrecebido == '0'){
            digitalWrite(verde, LOW);
            //Serial.print(LOW);            
            delay(300);
        }
        vrecebido = -2;
    }
    
     leitura = analogRead(ldr);
   //Serial.print(leitura);     // o valor lido

  // alguns limiares para quantizar valores determinados
  if (leitura < 10) {
    Serial.println("  Brilhante"); // escuridão
  } else if (leitura < 700) {
    Serial.println("  Muito Claro"); // penumbra, entardecer
  } else if (leitura > 700 && leitura <950) {
    Serial.println("  Iluminado"); // 
  } else if (leitura > 950) {
    Serial.println("  Muito Escuro"); // brilhante
  }
  
  delay(1000);
    
}

