//sinaleiro 

int verde = 3;
int amarelo = 5;
int vermelho = 6;


void setup() {                
  
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT); 
  pinMode(vermelho, OUTPUT);   
}


void loop() {
  digitalWrite(verde, HIGH);   
  delay(2000);               
  digitalWrite(verde, LOW);    
  delay(2000);  
  digitalWrite(amarelo, HIGH);  
  delay(1000); 
 digitalWrite(amarelo, LOW);    
  delay(1000);
 digitalWrite(vermelho, HIGH);  
  delay(2000); 
 digitalWrite(vermelho, LOW);    
  delay(2000);    
}

