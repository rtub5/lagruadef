int funo = 2;
int fdos = 3;
int ftres = 4;

int tempsentredada = 100;

int valorsensor = 0; 

int valorminim = 0; 
int primeralinea = 10;
int segonalinea = 50;
int terceralinea = 100;

void setup() {
  Serial.begin(9600);
  pinMode(funo, OUTPUT);
  pinMode(fdos, OUTPUT);
  pinMode(ftres, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  valorsensor = analogRead(A0);
  delay(100);
  Serial.print("Valor sensor de Llum: \t");
  Serial.println(valorsensor);

   if (valorsensor = valorminim) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } // if the temperature rises 2-4 degrees, turn an LED on
  else if (valorsensor <= 10) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } // if the temperature rises 4-6 degrees, turn a second LED on
  else if (valorsensor >= 10) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } // if the temperature rises more than 6 degrees, turn all LEDs on
  else if (valorsensor >= 100) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }

  
  
  
}
