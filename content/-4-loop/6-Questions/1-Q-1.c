//  sum of n number

#include <stdio.h>

int main() {


   int sum , k , n ;

   printf("enter the n \n");
   scanf("%d", &n);
 
   k = 1;
   while(k<=n){
    sum += k;
   k++;
   }
  

return 0;
}
