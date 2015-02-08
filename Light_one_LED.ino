int led[9] = {1,2,3,4,5,6,7,8,9};
int tran[3] = {10,11,12};
int switc = 13;

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
  
  light(3);
  
  // bottom corner led (I think ;) )
  /*
  digitalWrite(tran1,High);
  digitalWrite(tran2,LOW);
  digitalWrite(tran3,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  */
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
