//Programa: Conectando Sensor Ultrassonico HC-SR04 ao Arduino
//Autor: PH

//Carrega a biblioteca do sensor ultrassonico
#include<Ultrasonic.h>
#include<Servo.h>

//Define os pinos para o trigger e echo e o servo motor
#define pino_trigger 4
#define pino_echo 5
#define SERVO 6

//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);
//Inicializa as variáveis do Servo
Servo s; // Variável Servo
int pos; // Posição Servo
int i = 0;

void setup() {
    s.attach(SERVO);
    Serial.begin(9600);
    s.write(0); // Inicia motor posição zero
    
    Serial.begin(9600);
    Serial.println("Lendo dados do sensor...");
    
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    //Le as informacoes do sensor, em cm e pol
    float cmMsec, inMsec;
    long microsec = ultrasonic.timing();
    //cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
    
    
    //Exibe informacoes no serial monitor
    
    while(i<5){
        for(pos = 0; pos < 180; pos++) {
            s.write(pos);
            delay(15);
            
            if(pos == 60){
                delay(5000);
                float cmMsec, inMsec;
                long microsec = ultrasonic.timing();
                
                cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
                
                if(cmMsec < 100){
                    Serial.print("\nObjeto Detectado!\n");
                    Serial.print("Distancia em cm: \n");
                    Serial.print(cmMsec);
                    digitalWrite(LED_BUILTIN, HIGH);
                    delay(500);
                }else{
                    digitalWrite(LED_BUILTIN, LOW);
                }
                
                
                
            }
            if(pos == 120){
                delay(5000);
                
                
                
                float cmMsec, inMsec;
                long microsec = ultrasonic.timing();
                
                cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
                
                if(cmMsec < 100){
                    Serial.print("\nObjeto Detectado!\n");
                    Serial.print("Distancia em cm: \n");
                    Serial.print(cmMsec);
                    digitalWrite(LED_BUILTIN, HIGH);
                    delay(500);
                }else{
                    digitalWrite(LED_BUILTIN, LOW);
                }
                
            }
            
            if(pos == 180){
                delay(5000);
                
                
                float cmMsec, inMsec;
                long microsec = ultrasonic.timing();
                
                
                cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
                
                if(cmMsec < 100){
                    Serial.print("\nObjeto Detectado!\n");
                    Serial.print("Distancia em cm: \n");
                    Serial.print(cmMsec);
                    digitalWrite(LED_BUILTIN, HIGH);
                    delay(500);
                }else{
                    digitalWrite(LED_BUILTIN, LOW);
                }
            }
            
            
        }
        delay(1000);
        
        for(pos = 180; pos >= 0; pos--){
            s.write(pos);
            delay(15);
            
            if(pos == 60){
                delay(5000);
                
                
                float cmMsec, inMsec;
                long microsec = ultrasonic.timing();
                
                cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
                
                if(cmMsec < 100){
                    Serial.print("\nObjeto Detectado!\n");
                    Serial.print("Distancia em cm: \n");
                    Serial.print(cmMsec);
                    digitalWrite(LED_BUILTIN, HIGH);
                    delay(500);
                }else{
                    digitalWrite(LED_BUILTIN, LOW);
                }
                
                
            }
           
            if(pos == 120){
                delay(5000);
                
                float cmMsec, inMsec;
                long microsec = ultrasonic.timing();
                
                cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
                
                if(cmMsec < 100){
                    Serial.print("\nObjeto Detectado!\n");
                    Serial.print("Distancia em cm: \n");
                    Serial.print(cmMsec);
                    digitalWrite(LED_BUILTIN, HIGH);
                    delay(500);
                }else{
                    digitalWrite(LED_BUILTIN, LOW);
                }
                
                
                
            }
            
            if(pos == 180){
                delay(5000);
                
                float cmMsec, inMsec;
                long microsec = ultrasonic.timing();
                
                cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
                
                if(cmMsec < 100){
                    Serial.print("\nObjeto Detectado!\n");
                    Serial.print("Distancia em cm: \n");
                    Serial.print(cmMsec);
                    digitalWrite(LED_BUILTIN, HIGH);
                    delay(500);
                }else{
                    digitalWrite(LED_BUILTIN, LOW);
                }
                
                
                
            }
            
            
            
            
        }
        i++;
    }
}

