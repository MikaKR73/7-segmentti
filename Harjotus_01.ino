// Arvot
#define LedE 11
#define LedD 10
#define LedC 9
#define LedDP 8
#define LedG 7
#define LedF 6
#define LedA 5
#define LedB 4
#define LedOFF HIGH
#define LedON LOW

//Muuttujien arvon määritys
int LedEState = LedOFF;
int LedDState = LedOFF;
int LedCState = LedOFF;
int LedDPState = LedOFF;
int LedGState = LedOFF;
int LedFState = LedOFF;
int LedAState = LedOFF;
int LedBState = LedOFF;

// Otetaan käyttöön
void setup(){
  pinMode(LedE, OUTPUT);
  pinMode(LedD, OUTPUT);
  pinMode(LedC, OUTPUT);
  pinMode(LedDP, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(LedF, OUTPUT);
  pinMode(LedA, OUTPUT);
  pinMode(LedB, OUTPUT);
  digitalWrite(LedE, LedEState);
  digitalWrite(LedD, LedDState);
  digitalWrite(LedC, LedCState);
  digitalWrite(LedDP, LedDPState);
  digitalWrite(LedG, LedGState);
  digitalWrite(LedF, LedFState);
  digitalWrite(LedA, LedAState);
  digitalWrite(LedB, LedBState);
  Serial.begin(9600);
}

int count = 1; //Määritetään numero arvo laskurille

void LediTila(){ // Määritetään ledien päälle
  switch( count ){
    case 1:
    	LedEState = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 1 ON");
    	break;
  	case 2: 
        LedDState = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 2 ON");
        break;
  	case 3: 
        LedCState = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 3 ON");
        break;
   	case 4: 
        LedDPState = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 4 ON");
        break;
   	case 5: 
        LedGState = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 5 ON");
        break;
   	case 6: 
        LedFState = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 6 ON");
        break;
   	case 7: 
        LedAState = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 7 ON");
        break;
   	case 8: 
        LedBState = LedON; // Määritetään ledin tila
    	Serial.println("LEDI 8 ON");
        break;
    case 9: // Nollataan ledi
        LedEState = LedOFF;
        LedDState = LedOFF;
    	LedCState = LedOFF;
    	LedDPState = LedOFF;
    	LedGState = LedOFF;
    	LedFState = LedOFF;
    	LedAState = LedOFF;
    	LedBState = LedOFF;
    	Serial.println("LEDIT SAMUTETAAN");
    	count = 0;
        break;

    }
  }
  
void loop(){
  LediTila();  
  digitalWrite(LedE, LedEState); //Kirjoittaa ledin tilan
  digitalWrite(LedD, LedDState); //Kirjoittaa ledin tilan
  digitalWrite(LedC, LedCState); //Kirjoittaa ledin tilan
  digitalWrite(LedDP, LedDPState); //Kirjoittaa ledin tilan
  digitalWrite(LedG, LedGState); //Kirjoittaa ledin tilan
  digitalWrite(LedF, LedFState); //Kirjoittaa ledin tilan
  digitalWrite(LedA, LedAState); //Kirjoittaa ledin tilan
  digitalWrite(LedB, LedBState); //Kirjoittaa ledin tilan
  count++;
  delay(1000); // Odottaa 1000 millisekunttia
}
