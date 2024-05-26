#include <stdio.h>

int main() {

//if else 

printf("enter your mark\n");
scanf("%d",&mark);

if(mark > 89 ){
  printf("you got a++\n");  
}

else if(mark > 79){
printf("you got a+\n")  ;
}
else if(mark > 69){
printf("you got a\n")  ;
}
else if(mark > 59){
printf("you got a-\n")  ;
}
else if(mark > 49){
printf("you got b\n")  ;
}
else if(mark > 39){
printf("you got c\n")  ;
}
else if(mark > 32){
printf("you got a+\n")  ;
}

else{
  printf("you are fail\n") ; 
}

return 0;
}
