int led[9] = {1,2,3,4,5,6,7,8,9};
int tran[3] = {10,11,12};
int switc = 0;
int count = 0;

void setup(){
  int i;

  for( i = 0 ; i < 9 ; i++){
  
    pinMode(led[i],OUTPUT);
  
  }
  
  for( i = 0 ; i < 3 ; i++){
   
    pinMode(tran[i],OUTPUT);
  
  }
  
  pinMode(switc,INPUT);

}

void loop(){
  
  int i;

    int buttonState = digitalRead(switc);
    
    if (buttonState == 1) count++;
    
    switch (count % 4){
    
      case 0:
        wiper(30);
        break;
      case 1:
        light_line();
        break;
      case 2:
        line();
        break;
      case 3:
        for( i = 0 ; i < 8 ; i++ ){
           rise(100);
        }
        count = 3;    
        break;
    
    }
   
//   for( i = 0 ; i < 4 ; i++){
     
//   }
 
//   for( i = 0 ; i < 5 ; i++ ){
     
     
     
//   }
//   for( i = 0 ; i < 3; i++ ){
     
//   }
//   
  //circle(2);
  //delay(1000);
  //light(4);
}

// tric 4

void wiper(int k){
  
  int i;
  
  for(i = 0 ; i < k ; i++ ){
   
    
    light(20);
    delay(1);
    light(11);
    delay(1);
    light(2);
    delay(1);
    
    
    light(24);
    delay(1);
    light(15);
    delay(1);
    light(6);
    delay(1);
    
  }
  
  for(i = 0 ; i < k ; i++) {
    
  
    light(20);
    delay(1);
    light(14);
    delay(1);
    light(8);
    delay(1);
    
    light(10);
    delay(1);
    light(9);
    delay(1);
    
    light(24);
    delay(1);
    light(15);
    delay(1);
    light(8);
    delay(1);
    
    light(12);
    delay(1);
    light(9);
    delay(1);
    
    
  }
  
  for( i = 0 ; i < k ; i++){
    light(20);
    delay(1);
    light(23);
    delay(1);
    light(26);
    delay(1);
    
    light(27);
    delay(1);
    light(19);
    delay(1);
    
    light(24);
    delay(1);
    light(25);
    delay(1);
    light(26);
    delay(1);
    
    light(21);
    delay(1);
    light(27);
  }
  
  for(i = 0 ; i < k ; i++) {
    light(20);
    delay(1);
    light(14);
    delay(1);
    light(8);
    delay(1);
    
    light(10);
    delay(1);
    light(9);
    delay(1);
    
    light(24);
    delay(1);
    light(15);
    delay(1);
    light(8);
    delay(1);
    
    light(12);
    delay(1);
    light(9);
    delay(1);
    
      
}
  
}

// tric 3

void light_line(){
  
 digitalWrite(led[9],HIGH);
 digitalWrite(led[2],HIGH);
 digitalWrite(led[8],HIGH);
 digitalWrite(led[6],HIGH);
 
  digitalWrite(led[3],LOW);
 digitalWrite(led[1],LOW);
 digitalWrite(led[5],LOW);
 digitalWrite(led[7],LOW);
 
 digitalWrite(tran[0],HIGH);
 digitalWrite(tran[1],HIGH);
 digitalWrite(tran[2],HIGH);

 delay(1000);

 digitalWrite(led[3],HIGH);
 digitalWrite(led[1],HIGH);
 digitalWrite(led[5],HIGH);
 digitalWrite(led[7],HIGH);
 
 digitalWrite(led[9],LOW);
 digitalWrite(led[2],LOW);
 digitalWrite(led[8],LOW);
 digitalWrite(led[6],LOW);
 
 digitalWrite(tran[0],HIGH);
 digitalWrite(tran[1],HIGH);
 digitalWrite(tran[2],HIGH);
 
 delay(1000);
  
}

// trick 2

void line(){
  
  //row 1
  light(9);
  delay(100);
  light(1);
  delay(100);
  light(2);
  delay(100);
  light(5);
  delay(100);
  light(8);
  delay(100);
  light(7);
  delay(100);
  light(6);
  delay(100);
  light(3);
  delay(100);
  
  //row 2
  
  light(18);
  delay(100);
  light(10);
  delay(100);
  light(11);
  delay(100);
  light(14);
  delay(100);
  light(17);
  delay(100);
  light(16);
  delay(100);
  light(15);
  delay(100);
  light(12);
  delay(100);
  
  //row 3
   light(9 + 18);
  delay(100);
  light(1 + 18);
  delay(100);
  light(2 + 18);
  delay(100);
  light(5 + 18);
  delay(100);
  light(8 + 18);
  delay(100);
  light(7 + 18);
  delay(100);
  light(6 + 18);
  delay(100);
  light(3 + 18);
  delay(100);
  light(9 + 18);
  delay(100);

  //reverse  
  
  //*****//
  light(3 + 9);
  delay(100);
  light(9 + 9);
  delay(100);
  light(1 + 9);
  delay(100);
  light(2 + 9);
  delay(100);
  light(5 + 9);
  delay(100);
  light(8 + 9);
  delay(100);
  light(7 + 9);
  delay(100);
  light(6 + 9);
  delay(100);
  
  /********/
  
  light(3);
  delay(100);
  light(9);
  delay(100);
  light(1);
  delay(100);
  light(2);
  delay(100);
  light(5);
  delay(100);
  light(8);
  delay(100);
  light(7);
  delay(100);
  light(6);
  delay(100);
  
}

// trick 1
void rise(int k){
  
  square(0);
  delay(k);
  square(1);
  delay(k);
  square(2);
  delay(k);
  
}
void square(int j){

  int i;
  
  for( i = 0; i < 9 ; i++ ){
    
    digitalWrite(led[i],HIGH);
    
  }
  
  if( j  ==  0) { 
    digitalWrite(tran[0],HIGH);
    digitalWrite(tran[1],LOW);
    digitalWrite(tran[2],LOW);
  }
  
  if( j  ==  1) { 
    digitalWrite(tran[0],LOW);
    digitalWrite(tran[1],HIGH);
    digitalWrite(tran[2],LOW);
  }
  
  if( j  ==  2) { 
    digitalWrite(tran[0],LOW);
    digitalWrite(tran[1],LOW);
    digitalWrite(tran[2],HIGH);
  }
  
}

void circle(int j){
  
  
  int i = 0;
  
  for( int i = 1 + 9 * j ; i < 10 + 9 * j; i++ ){
  
    light(i);
    delay(10000);
    
    
  }  
}

void light(int no){
  
  for(int i = 0 ; i < 10 ; i++){
 
    if( i != (no%9) ){
    
      digitalWrite(led[i],LOW);
 
    }
    
  }
  
  digitalWrite(led[no%9],HIGH);

  if(no <= 9){
    
    digitalWrite(tran[0],HIGH);
    digitalWrite(tran[1],LOW);
    digitalWrite(tran[2],LOW);
  }
  
  if(no > 9 && no <= 18){
    
    digitalWrite(tran[0],LOW);
    digitalWrite(tran[1],HIGH);
    digitalWrite(tran[2],LOW);
  }
  
  if(no > 18 && no <= 27){
    digitalWrite(tran[0],LOW);
    digitalWrite(tran[1],LOW);
    digitalWrite(tran[2],HIGH);
  }
  
}
