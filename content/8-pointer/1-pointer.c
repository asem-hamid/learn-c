#include <stdio.h>


int main() {


int age = 22;
int *ptr = &age; //assign address(&age) to a pointer(*ptr)
int _age = *ptr; //assign value(*ptr) to a variable(_age)


// the %p format specifier is used to print a pointer value (i.e., the memory address stored in the pointer).


//for address 

printf("%p\n",&age);  // it will show the address of age variable
printf("%p\n",ptr);   // it will show value inside of ptr variable (in this case the value is the address of age variable)
printf("%p\n",&ptr);  // it will show the address of ptr variable
printf("%p\n",&_age); // it will show the address of _age variable

printf("\n");

printf("%p\n",age); //use & for address
printf("%p\n",ptr);
printf("%p\n",*ptr); //use & for address
printf("%p\n",_age); //use & for address

printf("\n");

// the %u format specifier is used to print an unsigned integer value.

printf("%u\n",&age);
printf("%u\n",ptr); 
printf("%u\n",&ptr);
printf("%u\n",&_age);

printf("\n");


//for value

printf("%d\n",age);
printf("%d\n",ptr); //ptr have address not value

printf("%d\n",*ptr); /*  *ptr(pointer) means value of an address which is store in ptr |or| go to an address which is 
                          store in ptr like here ptr contain address of age(variable) so go to age(variable)
                          and print it's value */

printf("%d\n",_age);
printf("%d\n",*(&_age));  // (&_age) means address of _age and *(&_age) means value of this address


printf("new\n");


int x;
int *gh;

gh = &x;
*gh = 5;
printf("x = %d\n",x);
printf("*gh = %d\n",*gh);

*gh += 5;
printf("x = %d\n",x);
printf("*gh = %d\n",*gh);
    
(*gh)++;
printf("x = %d\n",x);
printf("*gh = %d\n",*gh);

// we can also use other data type 

int *pointi;
float *pointf;
char *pointc;

return 0;
}
