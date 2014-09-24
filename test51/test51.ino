int time;
int L;
int L2;
int R;
int R2;
int C;
void setup()
{  
   pinMode(3,OUTPUT);   
   pinMode(5,OUTPUT);  
   pinMode(6,OUTPUT); 
   pinMode(9,OUTPUT); 
} 
void loop()
{
    int L = analogRead (1);
    int L2 = analogRead (2);
    int R = analogRead (3);
    int R2 = analogRead (4);
    int C = analogRead (5);
    if((L>500)&&(R>500)&&(C<500)&&(L2>500)&&(R2>500))//cดำ
    {
       Forward(253);
    }/*
    else if((L>500)&&(R>500)&&(C>500)&&(L2>500)&&(R2>500))//ขาวหมด
    {
       Forward(110);
    }
    else if((L>500)&&(R<500)&&(C>500)&&(L2>500)&&(R2<500))//ขวาดำ2จุด
    {
       Spin_Left(120);
    }*/ else if((L>500)&&(R>500)&&(C>500)&&(L2>500)&&(R2<500))//ขวาดำปลาย
    {
       Spin_Left(120);
    }/*
       else if((L>500)&&(R<500)&&(C<500)&&(L2<500)&&(R2>500))//ขวาดำ1จุด
    {
       Spin_Left(100);
    }
     else if ((L<500)&&(R>500)&&(C>500)&&(L2>500)&&(R2>500))//ซ้ายดำต้น
    {
      
       Spin_Right(100);
    }
     else if ((L<500)&&(R>500)&&(C>500)&&(L2<500)&&(R2>500))//ซ้ายดำ2
    {
      
       Spin_Right(100);
    }*/
     else if ((L>500)&&(R>500)&&(C>500)&&(L2<500)&&(R2>500))//ปลายซ้ายดำ
    {
      
       Spin_Right(120);
    }/*
    else if ((L<500)&&(R>500)&&(C<500)&&(L2>500)&&(R2>500))//ซ้ายกลางดำ
    {
      
       Spin_Right(100);
    }*/
    else if ((L<500)&&(R>500)&&(C<500)&&(L2<500)&&(R2>500))
    {
      Forward(20);
       Spin_Right(100);
       delay (400);
    }
    else if ((L>500)&&(R<500)&&(C<500)&&(L2>500)&&(R2<500))
    {
      Forward(20);
       Spin_Left(100);
       delay (400);
    }
     /*else if ((L<500)&&(R<500)&&(C<500)&&(L2<500)&&(R2<500))
{
   Forward(70);
   if ((L<500)&&(R<500)&&(C<500)&&(L2<500)&&(R2<500))
  {
  Spin_Left(100);
    delay (800);
  }
}*/
}
void Forward(int speed)
{
    analogWrite(3,speed);  
    digitalWrite(5,LOW);  
    analogWrite(6,speed);  
    digitalWrite(9,LOW); 
  } 
void Backward(int speed)
  {  
    analogWrite(5,speed);  
    digitalWrite(3,LOW);  
    analogWrite(9,speed);  
    digitalWrite(6,LOW); 
  } 
void Spin_Left(int speed)
  {  
    analogWrite(5,speed);  
    digitalWrite(3,LOW);  
    analogWrite(6,speed);  
    digitalWrite(9,LOW); 
  } 
void Spin_Right(int speed)
  {  
    analogWrite(3,speed);  
    digitalWrite(5,LOW);  
    analogWrite(9,speed);  
    digitalWrite(6,LOW); 
  }
