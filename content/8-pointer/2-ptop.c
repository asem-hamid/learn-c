#include <stdio.h>


int main() {

printf("pointer to pointer\n");

float price = 100.00 ;
float *pon = &price;
float **ppon = &pon ;

printf("price = %f\n", **(ppon)); // **ppon is same of **(ppon)


// we can do the same thing in another way 

int r = 5;
int *p = &r;
int *q ;

q = p;


printf("q = %d\n",*q);


return 0;
}
