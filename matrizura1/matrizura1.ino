// Definindo os pinos dos LEDs
#define LED1 9
#define LED2 8
#define LED3 7
#define LED4 6
#define LED5 4
#define LED6 3
#define LED7 2
#define LED8 10
#define LED9 11


// Definindo os pinos dos botões
#define BUTTON1 13
#define BUTTON2 12

bool ligaled1 = false;
bool ligaled2 = false;
int lastButtonState1 = HIGH;
int lastButtonState2 = HIGH;

void setup() {
  // Configurando os pinos dos LEDs como saída
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  Serial.begin(9600);
  // Configurando os pinos dos botões como entrada
  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);
}

void loop() {
  // Lendo o estado dos botões
  int buttonState1 = digitalRead(BUTTON1);
  int buttonState2 = digitalRead(BUTTON2);
  
    Serial.println(buttonState1);

  // Se o botão 1 for pressionado, acenda o LED1
  if (buttonState1 == LOW && lastButtonState1 == HIGH) {
    ligaled1 = !ligaled1;
    digitalWrite(LED1, ligaled1 ? HIGH : LOW);
    digitalWrite(LED3, ligaled1 ? HIGH : LOW);
    digitalWrite(LED5, ligaled1 ? HIGH : LOW);
    digitalWrite(LED7, ligaled1 ? HIGH : LOW);
    digitalWrite(LED9, ligaled1 ? HIGH : LOW);
  }

  // Se o botão 2 for pressionado, acenda o LED2
  if (buttonState2 == LOW && lastButtonState2 == HIGH) {
    Serial.println(buttonState2);
    ligaled2 = !ligaled2;
    digitalWrite(LED2, ligaled2 ? HIGH : LOW);
    digitalWrite(LED4, ligaled2 ? HIGH : LOW);
    digitalWrite(LED6, ligaled2 ? HIGH : LOW);
    digitalWrite(LED8, ligaled2 ? HIGH : LOW);
  }
  lastButtonState1 = buttonState1;
  lastButtonState2 = buttonState2;
  delay(50);
}
