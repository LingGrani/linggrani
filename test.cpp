const int pinSensorSuara = 2;
const int pinRelay = 3;
bool lampuStatus = false;

void setup() {
  pinMode(pinSensorSuara, INPUT);
  pinMode(pinRelay, OUTPUT);
  digitalWrite(pinRelay, HIGH);
  Serial.begin(9600);
}

void loop() {
  int suara = digitalRead(pinSensorSuara);
  if (suara == HIGH) {
    lampuStatus = !lampuStatus;
    digitalWrite(pinRelay, lampuStatus ? LOW : HIGH);
    
    Serial.println(lampuStatus ? "Lampu Nyala" : "Lampu Mati");
    delay(300);
  }
}


int SOUND = 8;
int relayPin = 5;
int val = 0;
int heard = 0;

void setup() {
  Serial.beginn(9600);
  pinMode(SOUND, INPUT_PULLUP);
  pinModel(relayPin, OUTPUT);
}