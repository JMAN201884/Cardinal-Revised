const byte LimitSwitchWPin = 2;
const byte LimitSwitchSPin = 3;
const byte LimitSwitchELPin = 18;
int Limit_SwitchW = 29;
// int Limit_SwitchS = ;
// int Limit_SwitchEL = ;
//space line
int EncoderWF = 25;
int EncoderWB = 27;
//int EncoderSF = ;
//int EncoderSB = ;
//int EncoderELF = ;
//int EncoderELB = ;
//space line
int MotorWF = 33;
int MotorWB = 35;
//int MotorSF = ;
//int MotorSB = ;
//int MotorELF = ;
//int MotorELB = ;
//space line
int counterWF = 0;
int counterWB = 0;
int counterSF = 0;
int counterSB = 0;
int counterELF = 0;
int counterELB = 0;

void setup() {
    Serial.begin(9600);
    pinMode(MotorWF, OUTPUT);
    pinMode(MotorWB, OUTPUT);
    pinMode(MotorSF, OUTPUT);
    pinMode(motorSB, OUTPUT);
    pinMode(MotorELF, OUTPUT);
    pinMode(MotorELB, OUTPUT);
//space line
    pinMode(EncoderWF, INPUT);
    pinMode(EncoderWB, INPUT);
    pinMode(EncoderSF, INPUT);
    pinMode(EncoderSB, INPUT);
    pinMode(EncoderELF, INPUT);
    pinMode(EncoderELB, INPUT);
//space line
    pinMode(EncoderWF, INPUT_PULLUP);
    pinMode(EncoderWB, INPUT_PULLUP);
    pinMode(EncoderSF, INPUT_PULLUP);
    pinMode(EncoderSB, INPUT_PULLUP);
    pinMode(EncoderELF, INPUT_PULLUP);
    pinMode(EncoderELB, INPUT_PULLUP);
//space line
    pinMode(Limit_SwitchW, INPUT_PULLUP);
    pinMode(Limit_SwitchS, INPUT_PULLUP);
    pinMode(Limit_SwitchEL, INPUT_PULLUP;)
    pinMode(LimitSwitchWPin, INPUT_PULLUP);
    pinMode(LimitSwitchSPin, INPUT_PULLUP);
    pinMode(LimitSwitchELPin, INPUT_PULLUP);
//space line
    attachInterrupt(digitalPinToInterrupt(LimitSwitchWPin), Limit_Switch_interrupt, LOW);
    attachInterrupt(digitalPinToInterrupt(LimitSwitchSPin), Limit_swtich_interrupt, LOW);
    attachInterrupt(digitalPinToInterrupt(LimitSwitchELPin), Limit_SwitchEL_interrupt, LOW);
}

void Counter_Right() {
    counterWF = counterWF + 1;
    counterWB = counterWB - 1;
}

void Waist_Rotate_Right() {
    digitalWrite(MotorWF, HIGH);
    until(counterWF >= 200)
}
