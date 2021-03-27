// Laboratorio 4 por Mario Soto
// Carnet: 18351

const byte ledPin_R = RED_LED;
const byte ledPin_B = BLUE_LED;
const byte ledPin_G = GREEN_LED;

const int push_1 = PUSH1;
const int push_2 = PUSH2;
int inicio = 0;
int contador1 = 0;
int contador2 = 0;

//Declaramos los pines que utilizara el Jugador 1
const int led1j1 = PB_5;
const int led2j1 = PB_0;
const int led3j1 = PB_1;
const int led4j1 = PE_4;
const int led5j1 = PE_5;
const int led6j1 = PB_4;
const int led7j1 = PA_5;
const int led8j1 = PA_6;

//Declaramos los pines que utilizara el Jugador 2
const int led1j2 = PA_7;
const int led2j2 = PD_0;
const int led3j2 = PD_1;
const int led4j2 = PD_2;
const int led5j2 = PD_3;
const int led6j2 = PE_1;
const int led7j2 = PE_2;
const int led8j2 = PE_3;

volatile byte state = LOW;

void setup() {
  pinMode(ledPin_R, OUTPUT);
  pinMode(ledPin_G, OUTPUT);
  pinMode(ledPin_B, OUTPUT);

  pinMode(led1j1, OUTPUT);
  pinMode(led2j1, OUTPUT);
  pinMode(led3j1, OUTPUT);
  pinMode(led4j1, OUTPUT);
  pinMode(led5j1, OUTPUT);
  pinMode(led6j1, OUTPUT);
  pinMode(led7j1, OUTPUT);
  pinMode(led8j1, OUTPUT);

  pinMode(led1j2, OUTPUT);
  pinMode(led2j2, OUTPUT);
  pinMode(led3j2, OUTPUT);
  pinMode(led4j2, OUTPUT);
  pinMode(led5j2, OUTPUT);
  pinMode(led6j2, OUTPUT);
  pinMode(led7j2, OUTPUT);
  pinMode(led8j2, OUTPUT);

  pinMode(push_1, INPUT_PULLUP);
  pinMode(push_2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(push_1), player_1, RISING);
  attachInterrupt(digitalPinToInterrupt(push_2), player_2, RISING);
}

void loop() {

  if ((digitalRead(push_1) == 0 || digitalRead(push_2) == 0) && (inicio==0)){
    semaforo();
    inicio = 1;
    }
  
  
}

void player_1() {
  if (inicio == 1){
    delay(500);
    contador1 = contador1 + 1;
    if (contador1 == 1){
      digitalWrite(led1j1, HIGH);
      digitalWrite(led2j1, LOW);
      digitalWrite(led3j1, LOW);
      digitalWrite(led4j1, LOW);
      digitalWrite(led5j1, LOW);
      digitalWrite(led6j1, LOW);
      digitalWrite(led7j1, LOW);
      digitalWrite(led8j1, LOW);
      }
    if (contador1 == 2){
      digitalWrite(led1j1, LOW);
      digitalWrite(led2j1, HIGH);
      digitalWrite(led3j1, LOW);
      digitalWrite(led4j1, LOW);
      digitalWrite(led5j1, LOW);
      digitalWrite(led6j1, LOW);
      digitalWrite(led7j1, LOW);
      digitalWrite(led8j1, LOW);
      }
    if (contador1 == 3){
      digitalWrite(led1j1, LOW);
      digitalWrite(led2j1, LOW);
      digitalWrite(led3j1, HIGH);
      digitalWrite(led4j1, LOW);
      digitalWrite(led5j1, LOW);
      digitalWrite(led6j1, LOW);
      digitalWrite(led7j1, LOW);
      digitalWrite(led8j1, LOW);
      }
    if (contador1 == 4){
      digitalWrite(led1j1, LOW);
      digitalWrite(led2j1, LOW);
      digitalWrite(led3j1, LOW);
      digitalWrite(led4j1, HIGH);
      digitalWrite(led5j1, LOW);
      digitalWrite(led6j1, LOW);
      digitalWrite(led7j1, LOW);
      digitalWrite(led8j1, LOW);
      }
    if (contador1 == 5){
      digitalWrite(led1j1, LOW);
      digitalWrite(led2j1, LOW);
      digitalWrite(led3j1, LOW);
      digitalWrite(led4j1, LOW);
      digitalWrite(led5j1, HIGH);
      digitalWrite(led6j1, LOW);
      digitalWrite(led7j1, LOW);
      digitalWrite(led8j1, LOW);
      }
    if (contador1 == 6){
      digitalWrite(led1j1, LOW);
      digitalWrite(led2j1, LOW);
      digitalWrite(led3j1, LOW);
      digitalWrite(led4j1, LOW);
      digitalWrite(led5j1, LOW);
      digitalWrite(led6j1, HIGH);
      digitalWrite(led7j1, LOW);
      digitalWrite(led8j1, LOW);
      }
    if (contador1 == 7){
      digitalWrite(led1j1, LOW);
      digitalWrite(led2j1, LOW);
      digitalWrite(led3j1, LOW);
      digitalWrite(led4j1, LOW);
      digitalWrite(led5j1, LOW);
      digitalWrite(led6j1, LOW);
      digitalWrite(led7j1, HIGH);
      digitalWrite(led8j1, LOW);
      }
    if (contador1 == 8){
      digitalWrite(led1j1, LOW);
      digitalWrite(led2j1, LOW);
      digitalWrite(led3j1, LOW);
      digitalWrite(led4j1, LOW);
      digitalWrite(led5j1, LOW);
      digitalWrite(led6j1, LOW);
      digitalWrite(led7j1, LOW);
      digitalWrite(led8j1, HIGH);
      digitalWrite(ledPin_B, HIGH);
      inicio = 0;
      contador1 = 0;
      contador2 = 0;
      delay(3000);
      digitalWrite(led1j1, LOW);
      digitalWrite(led2j1, LOW);
      digitalWrite(led3j1, LOW);
      digitalWrite(led4j1, LOW);
      digitalWrite(led5j1, LOW);
      digitalWrite(led6j1, LOW);
      digitalWrite(led7j1, LOW);
      digitalWrite(led8j1, LOW);
      digitalWrite(led1j2, LOW);
      digitalWrite(led2j2, LOW);
      digitalWrite(led3j2, LOW);
      digitalWrite(led4j2, LOW);
      digitalWrite(led5j2, LOW);
      digitalWrite(led6j2, LOW);
      digitalWrite(led7j2, LOW);
      digitalWrite(led8j2, LOW);
      digitalWrite(ledPin_B, LOW);
      digitalWrite(ledPin_G, HIGH);
      delay(3000);
      digitalWrite(ledPin_G, LOW);
      }
    }
}

void player_2() {
  if (inicio == 1){
    delay(500);
    contador2 = contador2 + 1;
    if (contador2 == 1){
      digitalWrite(led1j2, HIGH);
      digitalWrite(led2j2, LOW);
      digitalWrite(led3j2, LOW);
      digitalWrite(led4j2, LOW);
      digitalWrite(led5j2, LOW);
      digitalWrite(led6j2, LOW);
      digitalWrite(led7j2, LOW);
      digitalWrite(led8j2, LOW);
      }
    if (contador2 == 2){
      digitalWrite(led1j2, LOW);
      digitalWrite(led2j2, HIGH);
      digitalWrite(led3j2, LOW);
      digitalWrite(led4j2, LOW);
      digitalWrite(led5j2, LOW);
      digitalWrite(led6j2, LOW);
      digitalWrite(led7j2, LOW);
      digitalWrite(led8j2, LOW);
      }
    if (contador2 == 3){
      digitalWrite(led1j2, LOW);
      digitalWrite(led2j2, LOW);
      digitalWrite(led3j2, HIGH);
      digitalWrite(led4j2, LOW);
      digitalWrite(led5j2, LOW);
      digitalWrite(led6j2, LOW);
      digitalWrite(led7j2, LOW);
      digitalWrite(led8j2, LOW);
      }
    if (contador2 == 4){
      digitalWrite(led1j2, LOW);
      digitalWrite(led2j2, LOW);
      digitalWrite(led3j2, LOW);
      digitalWrite(led4j2, HIGH);
      digitalWrite(led5j2, LOW);
      digitalWrite(led6j2, LOW);
      digitalWrite(led7j2, LOW);
      digitalWrite(led8j2, LOW);
      }
    if (contador2 == 5){
      digitalWrite(led1j2, LOW);
      digitalWrite(led2j2, LOW);
      digitalWrite(led3j2, LOW);
      digitalWrite(led4j2, LOW);
      digitalWrite(led5j2, HIGH);
      digitalWrite(led6j2, LOW);
      digitalWrite(led7j2, LOW);
      digitalWrite(led8j2, LOW);
      }
    if (contador2 == 6){
      digitalWrite(led1j2, LOW);
      digitalWrite(led2j2, LOW);
      digitalWrite(led3j2, LOW);
      digitalWrite(led4j2, LOW);
      digitalWrite(led5j2, LOW);
      digitalWrite(led6j2, HIGH);
      digitalWrite(led7j2, LOW);
      digitalWrite(led8j2, LOW);
      }
    if (contador2 == 7){
      digitalWrite(led1j2, LOW);
      digitalWrite(led2j2, LOW);
      digitalWrite(led3j2, LOW);
      digitalWrite(led4j2, LOW);
      digitalWrite(led5j2, LOW);
      digitalWrite(led6j2, LOW);
      digitalWrite(led7j2, HIGH);
      digitalWrite(led8j2, LOW);
      }
    if (contador2 == 8){
      digitalWrite(led1j2, LOW);
      digitalWrite(led2j2, LOW);
      digitalWrite(led3j2, LOW);
      digitalWrite(led4j2, LOW);
      digitalWrite(led5j2, LOW);
      digitalWrite(led6j2, LOW);
      digitalWrite(led7j2, LOW);
      digitalWrite(led8j2, HIGH);
      digitalWrite(ledPin_B, HIGH);
      inicio = 0;
      contador1 = 0;
      contador2 = 0;
      delay(3000);
      digitalWrite(led1j1, LOW);
      digitalWrite(led2j1, LOW);
      digitalWrite(led3j1, LOW);
      digitalWrite(led4j1, LOW);
      digitalWrite(led5j1, LOW);
      digitalWrite(led6j1, LOW);
      digitalWrite(led7j1, LOW);
      digitalWrite(led8j1, LOW);
      digitalWrite(led1j2, LOW);
      digitalWrite(led2j2, LOW);
      digitalWrite(led3j2, LOW);
      digitalWrite(led4j2, LOW);
      digitalWrite(led5j2, LOW);
      digitalWrite(led6j2, LOW);
      digitalWrite(led7j2, LOW);
      digitalWrite(led8j2, LOW);
      digitalWrite(ledPin_B, LOW);
      digitalWrite(ledPin_R, HIGH);
      delay(3000);
      digitalWrite(ledPin_R, LOW);
      }
    }
}
//
//
void semaforo() {
  //Se enciende el led rojo
  digitalWrite(ledPin_R, HIGH);
  digitalWrite(ledPin_G, LOW);
  delay(3000);
  //Se encienden los leds rojo y verde para hacer un color amarillo
  digitalWrite(ledPin_R, HIGH);
  digitalWrite(ledPin_G, HIGH);
  delay(3000);
  //Se enciende el led verde
  digitalWrite(ledPin_R, LOW);
  digitalWrite(ledPin_G, HIGH);
  delay(3000);
  //Se apagan ambos leds
  digitalWrite(ledPin_R, LOW);
  digitalWrite(ledPin_G, LOW);
  return;
}
