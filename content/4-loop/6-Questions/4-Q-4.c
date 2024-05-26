//factorial of n number

# include <stdio.h>

int main(){


   int factorial1 = 1 , k , n ;

   printf("enter the n \n");
   scanf("%d", &n);
 
   k = 1;
   while(k<=n){
    factorial1 *= k;
   k++;
   }
  
   printf("factorial = %d \n", factorial1);
  

// //another way

//  int factorial2 = 1 , o ;

//  printf("enter the o \n");
//  scanf("%d", &o);

//  for(int l = 1; l <= o;l++ ){

//    factorial2 *= l;
//  }
//  printf("factorial = %d \n", factorial2);

return 0;
}
