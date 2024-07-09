// Write a Program to find if a character entered by user is upper case or not.

#include <stdio.h>

int main() {

    char c = 'a' ;
    printf("enter the c : \n");
    scanf("%c",&c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("it is upper \n");
        printf("%d",c);
    }
    else if (c >= 'a'  && c <= 'z')
    {
        printf("it is lower \n") ;
        printf("%d",c);
    }
    else 
    { 
          printf("the c is invalid \n");
    }
    

return 0;
}
