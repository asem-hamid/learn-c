#include <stdio.h>
#include<math.h> // for pow function . we can calculate power of any number like  pow (2,3) means 2*2*2

int main() {

printf("Arithmetic instructions\n");

// addition  ( + )
// Subtraction ( - )
// Multiplication ( * ) 
// Division ( / ) 
// Modulus ( % )

int add = 5 + 7;
printf("%d\n",add);
  
int sub = 5 - 7;
printf("%d\n",sub);
  
int multi = 5 * 7;
printf("%d\n",multi);
  
int divi = 5 / 7;
printf("%d\n",divi);

int remainder = 5%3;
printf("%d\n",remainder);

int r2 = -5%3 ;
printf("%d\n",r2);

float  itf = 4+5.5;
printf("%f\n",itf);

float  itf2 = 4/5.0;
printf("%f\n",itf2);

int prb1 = 1.99999;
printf("%d\n",prb1);

int prb2 = (int) 1.99999;
printf("%d\n",prb2); 



int t = pow (5,2);
printf("%d\n",t);

float  p1 , p2 , v1 , v2  ; 

printf("enter p1\n") ;
scanf ("%f",&p1);
printf("enter v1\n");
scanf("%f",&v1);
printf("enter v2\n");
scanf("%f",&v2);
p2 =  p1*v1/v2 ;
printf("p2=%f\n",p2);   



printf(" Operator Precedence\n");  
int p = 4*3/6+2*2-3*5;
char modular_sign = '%';

printf("()");
printf("*,/,%c \n",modular_sign );
printf("+,-\n");
printf("=\n");
printf("For same precedence : left to right\n");
printf("%d\n",p);

return 0;
}
