int PWM_FREQUENCY = 50; // this variable is used to define the time period 
int PWM_CHANNEL = 0; // this variable is used to select the channel number
int PWM_RESOUTION = 8; // this will define the resolution of the signal which is 8 in this case
int GPIOPIN = 18 ; // GPIO to which we want to attach this channel signal
int dutyCycle = 127; // it will define the width of signal or also the one time

void setup()
{

ledcSetup(PWM_CHANNEL, PWM_FREQUENCY, PWM_RESOUTION);
ledcAttachPin(GPIOPIN, PWM_CHANNEL);


}

void loop() 
{

ledcWrite(PWM_CHANNEL, dutyCycle);

}