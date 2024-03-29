
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
} 
int income=0;
void loop()
{
   if (Serial.available()>0)
   {
     income=Serial.read();
     switch (income)
     {
       case 'f':
            forward();
              break;
       case 'b':
            backward();
            break;
       case 'l':
            left();
            break;
       case 'r':
            right();
            break;
       default :break;
     }
   }
}
void forward()
{
  digitalWrite (10,HIGH);//齿轮为前进状态（逆时针转动）时红灯亮；
  digitalWrite (9,LOW);  //齿轮为后退状态（顺时针转动）时绿灯亮；
  digitalWrite (6,HIGH);
  digitalWrite (5,LOW);
}
void backward()
{
  digitalWrite (9,HIGH);
  digitalWrite (10,LOW);
  digitalWrite (5,HIGH);
  digitalWrite (6,LOW);
}
void left()
{
  digitalWrite (10,HIGH);
  digitalWrite (9,LOW);
  digitalWrite (6,LOW);
  digitalWrite (5,LOW);
}
void right()
{
  digitalWrite (10,LOW);
  digitalWrite (9,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,HIGH);
}