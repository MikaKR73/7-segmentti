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
#define Button 2

// Muuttujien arvon määritys
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
  pinMode(Button, INPUT_PULLUP);
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

int count = 0;// näytön aloitus arvo
int nayttopois = 0;// Näytön pois laskurin aloitus arvo
  
void showNum(int number){ // Määritetään ledien päälle
  switch( number ){
    case 1:
    	// Määritetään ledin tila numerolle 1
        LedEState = LedOFF;
        LedDState = LedOFF;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedOFF;
    	LedFState = LedOFF;
    	LedAState = LedOFF;
    	LedBState = LedON;
    	break;
  	case 2: 
    	// Määritetään ledin tila numerolle 2
        LedEState = LedON;
        LedDState = LedON;
    	LedCState = LedOFF;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedOFF;
    	LedAState = LedON;
    	LedBState = LedON;
    	break;
  	case 3: 
    	// Määritetään ledin tila numerolle 3
        LedEState = LedOFF;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedOFF;
    	LedAState = LedON;
    	LedBState = LedON;
    	break;
   	case 4: 
    	// Määritetään ledin tila numerolle 4
        LedEState = LedOFF;
        LedDState = LedOFF;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedON;
    	LedAState = LedOFF;
    	LedBState = LedON;
    	break;
   	case 5: 
    	// Määritetään ledin tila numerolle 5
        LedEState = LedOFF;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedON;
    	LedAState = LedON;
    	LedBState = LedOFF;
    	break;
   	case 6: 
    	// Määritetään ledin tila numerolle 6
        LedEState = LedON;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedON;
    	LedAState = LedON;
    	LedBState = LedOFF;
      	break;
   	case 7: 
    	// Määritetään ledin tila numerolle 7
        LedEState = LedOFF;
        LedDState = LedOFF;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedOFF;
    	LedFState = LedOFF;
    	LedAState = LedON;
    	LedBState = LedON;
    	break;
   	case 8: 
    	// Määritetään ledin tila numerolle 8
        LedEState = LedON;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedON;
    	LedAState = LedON;
    	LedBState = LedON;
    	break;
     case 9: 
    	// Määritetään ledin tila numerolle 9
        LedEState = LedOFF;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedON;
    	LedAState = LedON;
    	LedBState = LedON;
    	break;
     case 0: 
    	// Määritetään ledin tila numerolle 0
        LedEState = LedON;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedOFF;
    	LedFState = LedON;
    	LedAState = LedON;
    	LedBState = LedON;
    	break;
    case 10: // Sammutetaan ledit
        LedEState = LedOFF;
        LedDState = LedOFF;
    	LedCState = LedOFF;
    	LedDPState = LedOFF;
    	LedGState = LedOFF;
    	LedFState = LedOFF;
    	LedAState = LedOFF;
    	LedBState = LedOFF;
    	break;
    case 11: // Määritetään ledit näytämään -
        LedEState = LedOFF;
        LedDState = LedOFF;
    	LedCState = LedOFF;
    	LedDPState = LedOFF;
    	LedGState = LedON;
    	LedFState = LedOFF;
    	LedAState = LedOFF;
    	LedBState = LedOFF;
    	break;
    }
  }

void naytto(int num){
  digitalWrite(LedE, LedEState); // Kirjoittaa ledin tilan
  digitalWrite(LedD, LedDState); // Kirjoittaa ledin tilan
  digitalWrite(LedC, LedCState); // Kirjoittaa ledin tilan
  digitalWrite(LedDP, LedDPState); // Kirjoittaa ledin tilan
  digitalWrite(LedG, LedGState); // Kirjoittaa ledin tilan
  digitalWrite(LedF, LedFState); // Kirjoittaa ledin tilan
  digitalWrite(LedA, LedAState); // Kirjoittaa ledin tilan
  digitalWrite(LedB, LedBState); // Kirjoittaa ledin tilan
  switch( num ){// Numeron tulostus serialiin
    case 1:
      Serial.println("LEDI NAYTTAA NUMEROA 1");
      break;
    case 2:
      Serial.println("LEDI NAYTTAA NUMEROA 2");
      break;
    case 3:
      Serial.println("LEDI NAYTTAA NUMEROA 3");
      break;
    case 4:
      Serial.println("LEDI NAYTTAA NUMEROA 4");
      break;
    case 5:
      Serial.println("LEDI NAYTTAA NUMEROA 5");
      break;
    case 6:
      Serial.println("LEDI NAYTTAA NUMEROA 6");
      break;
    case 7:
      Serial.println("LEDI NAYTTAA NUMEROA 7");
      break;
    case 8:
      Serial.println("LEDI NAYTTAA NUMEROA 8");
      break;
    case 9:
      Serial.println("LEDI NAYTTAA NUMEROA 9");
      break;
    case 0:
      Serial.println("LEDI NAYTTAA NUMEROA 0");
      break;
    case 10:
      Serial.println("LEDI NAYTTAA NUMEROA SAMUTETAAN");
      break;
    case 11:
      Serial.println("LEDI NAYTTAA -");
  	}
  }

int getNum(){ //Lukee säädintä
  int y = analogRead( A0 );// Lukee säätimen arvon
    if(y > 1000 ){
        return 11;
      }
  	if(y > 900 ){
        return 9;
      }
  	if(y > 800 ){
        return 8;
      }
	if(y > 700 ){
        return 7;
      }
  	if(y > 600 ){
        return 6;
      }
  	if(y > 500 ){
        return 5;
	  }
	if(y > 400 ){
        return 4;
      }
	if(y > 300 ){
        return 3;
      }
	if(y > 200 ){
        return 2;
      }
	if(y > 100 ){
        return 1;
      }
	return 0;
}


bool buttonPressed(){// Tarkistaa onko napulaa painettu
  if( digitalRead(Button) != LOW ){// Lukee nappulaa	
	return false;// Antaa arvon napulalle
  }
return true;// Antaa arvon napulalle
}

void loop(){
  if(buttonPressed() == true){// Tekee napulan arvon mukaan toiminnon
  	int count = getNum();// Ottaa numeron säätimeltä
    showNum(count); // Menee ja määrittää numeron
    naytto(count); // Menee ja laittaa numeron päällä
    nayttopois = 0;//Nollaa naytopois arvon
  }
  if(buttonPressed() == false){// Tekee napulan arvon mukaan toiminnon
    nayttopois++;// Lisää 1 naytopois arvoon
  }
  if(nayttopois == 2){
    count = 10;// Määrittää numeron
    showNum(count); // Menee ja määrittää numeron
    naytto(count); // Menee ja laittaa numeron päälle
  }
  if(nayttopois > 10){// Jos naytopois arvo kasvaa pistää luuppiin arvon
    nayttopois = 9;// Määrittää arvon
  }
}
