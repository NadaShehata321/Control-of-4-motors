void fwd(int a, int b){
  
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
   }
void bwd(int a, int b){
  
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
   }
void stop(int a,int b){
 
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
}
int FristSecond_motorpin1=12;
int FristSecond_motorpin2=9;
int ThirdFourth_motorpin1=11;
int ThirdFourth_motorpin2=13;

void setup()
{
  pinMode(FristSecond_motorpin1, OUTPUT);
  pinMode(FristSecond_motorpin2, OUTPUT);
  pinMode(ThirdFourth_motorpin1, OUTPUT);
  pinMode(ThirdFourth_motorpin2, OUTPUT);
   
}

void loop()
{
  fwd(ThirdFourth_motorpin1,ThirdFourth_motorpin2);
 delay(5000);
 bwd(ThirdFourth_motorpin1,ThirdFourth_motorpin2);
 delay(5000);
 stop(ThirdFourth_motorpin1,ThirdFourth_motorpin2);
 fwd(FristSecond_motorpin1,FristSecond_motorpin2);
 delay(5000);
 bwd(FristSecond_motorpin1,FristSecond_motorpin2);
 delay(5000);
 stop(FristSecond_motorpin1,FristSecond_motorpin2);
}
