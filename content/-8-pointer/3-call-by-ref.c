#include <stdio.h>

void square(int n);

void _square(int *n);


void dowork(int a,int b,int *sum,int *prod,int *avg);

int main() {



int number = 4;
square (number);
printf("number = %d\n", number);
_square(&number);  


int a = 5,b = 5;

int sum , prod , avg;

dowork(a, b, &sum, &prod, &avg);

printf("Sum is = %d\n",sum);
printf("product is = %d\n",prod);
printf("average is = %d\n",avg);

return 0;
}

//call by value
void square(int n) {
n = n * n;
printf("sqaure = %d\n", n);
}



void _square(int *n) {
*n = (*n) * (*n);
printf("sqaure = %d\n", *n);
}



void dowork(int a,int b,int *sum,int *prod,int *avg){

    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2;
}






