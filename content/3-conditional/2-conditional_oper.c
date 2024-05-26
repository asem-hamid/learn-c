#include <stdio.h>

int main() {

//conditional operator or ternary operator

int age ;
printf("enter your age \n");
scanf("%d",&age);

age >= 18 ? printf("you are an adult\n") : printf("you are not adult\n");

char result ;
int marks ;

result = (marks > 33) ? 'p' : 'f' ;

return 0;
}
