// Arvot
#define Led1 11
#define Led2 10
#define Led3 9
#define Led4 8
#define Led5 7
#define Led6 6
#define Led7 5
#define Led8 4
#define LedOFF HIGH
#define LedON LOW

//Muuttujien arvon määritys
int Led1State = LedOFF;
int Led2State = LedOFF;
int Led3State = LedOFF;
int Led4State = LedOFF;
int Led5State = LedOFF;
int Led6State = LedOFF;
int Led7State = LedOFF;
int Led8State = LedOFF;

// Otetaan käyttöön
void setup(){
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(Led7, OUTPUT);
  pinMode(Led8, OUTPUT);
  digitalWrite(Led1, Led1State);
  digitalWrite(Led2, Led2State);
  digitalWrite(Led3, Led3State);
  digitalWrite(Led4, Led4State);
  digitalWrite(Led5, Led5State);
  digitalWrite(Led6, Led6State);
  digitalWrite(Led7, Led7State);
  digitalWrite(Led8, Led8State);
  Serial.begin(9600);
}

int count = 1; //Määritetään numero arvo laskurille

void LediTila(){ // Määritetään ledien päälle
  switch( count ){
    case 1:
    	Led1State = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 1 ON");
    	break;
  	case 2: 
        Led2State = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 2 ON");
        break;
  	case 3: 
        Led3State = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 3 ON");
        break;
   	case 4: 
        Led4State = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 4 ON");
        break;
   	case 5: 
        Led5State = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 5 ON");
        break;
   	case 6: 
        Led6State = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 6 ON");
        break;
   	case 7: 
        Led7State = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 7 ON");
        break;
   	case 8: 
        Led8State = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 8 ON");
        break;
    case 9: // Nollataan ledi
        Led1State = LedOFF;
        Led2State = LedOFF;
    	Led3State = LedOFF;
    	Led4State = LedOFF;
    	Led5State = LedOFF;
    	Led6State = LedOFF;
    	Led7State = LedOFF;
    	Led8State = LedOFF;
    	Serial.println("LEDIT SAMUTETAAN");
    	count = 0;
        break;

    }
  }
  
void loop(){
  LediTila();
  digitalWrite(Led1, Led1State); //Kirjoittaa ledin tilan
  digitalWrite(Led2, Led2State); //Kirjoittaa ledin tilan
  digitalWrite(Led3, Led3State); //Kirjoittaa ledin tilan
  digitalWrite(Led4, Led4State); //Kirjoittaa ledin tilan
  digitalWrite(Led5, Led5State); //Kirjoittaa ledin tilan
  digitalWrite(Led6, Led6State); //Kirjoittaa ledin tilan
  digitalWrite(Led7, Led7State); //Kirjoittaa ledin tilan
  digitalWrite(Led8, Led8State); //Kirjoittaa ledin tilan
  count++;
  delay(1000); // Odottaa 1000 millisekunttia
}
