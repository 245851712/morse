void dot(int pin)
{
  digitalWrite(pin,HIGH);
  delay(250);
  digitalWrite(pin,LOW);
  delay(250);
}

void dash(int pin)
{
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(250);
}
char c="";
void setup() {
  Serial.begin(9600);//设置频率
}
void loop() {
  while (Serial.available() > 0){
    c=char(Serial.read());//读入一个字符
    //判断字符类型并以摩尔斯电码模式输出
    switch(c){
      case 'a': dot(13);dash(13);break;
      case 'b': dash(13);dot(13);dot(13);dot(13);break;
      case 'c': dash(13);dot(13);dash(13);dot(13);break;
      case 'd': dash(13);dot(13);dot(13);break;
      case 'e': dot(13);break;
      case 'f': dot(13);dot(13);dash(13);dot(13);break;
      case 'g': dash(13);dash(13);dot(13);break;
      case 'h': dot(13);dot(13);dot(13);dot(13);break;
      case 'i': dot(13);dot(13);break;
      case 'j': dot(13);dash(13);dash(13);dash(13);break;
      case 'k': dash(13);dot(13);dash(13);break;
      case 'l': dot(13);dash(13);dot(13);dot(13);break;
      case 'm': dash(13);dash(13);break;
      case 'n': dash(13);dot(13);break;
      case 'o': dash(13);dash(13);dash(13);break;
      case 'p': dot(13);dash(13);dash(13);dot(13);break;
      case 'q': dash(13);dash(13);dot(13);dash(13);break;
      case 'r': dot(13);dash(13);dot(13);break;
      case 's': dot(13);dot(13);dot(13);break;
      case 't': dash(13);break;
      case 'u': dot(13);dot(13);dash(13);break;
      case 'v': dot(13);dot(13);dot(13);dash(13);break;
      case 'w': dot(13);dash(13);dash(13);break;
      case 'x': dash(13);dot(13);dot(13);dash(13);break;
      case 'y': dash(13);dot(13);dash(13);dash(13);break;
      case 'z': dash(13);dash(13);dot(13);dot(13);break;
      default: break;
    }
    delay(2);
  }
}
