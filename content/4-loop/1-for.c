#include <stdio.h>

int main() {

 printf("for loop\n");
 
   for (int i=1; i<=10 ; i++){

     printf("loop no %d \n", i);

   }


   printf("new loop \n");

   for (int i=5; i<10 && i>0; i--){

     printf("loop no %d \n", i);

   }

   printf("new loop \n");

   for (float i=1.1; i<=20 ; i=i+1.1){

     printf("loop no %f \n", i);

   }

   for (char i='a'; i<='z' ; i++){

     printf("loop no %c \n", i);

   }


return 0;
}
