// standard library functions for string  ( to use we have to add <string.h>  )

#include <stdio.h>
#include <string.h>


int main() {


      
  //  strlen(str) - count length of a string

     printf("strlen(str)\n");



      char *str ="asem";

      printf("%d\n", strlen(str));
  

      char namelength[100];
    
      printf("Enter a name: ");
      fgets(namelength, 100, stdin);

      // strlen() include '\n' this , if you give input with scanf or fgets

      printf("Name length is : %d\n", strlen(namelength)); // if you enter asem you will get 5 here
      
      // we have to use " strlen() - 1 "

      printf("Name length is : %d\n", strlen(namelength) - 1); // if you enter asem you will get 4 here

      // strlen() include ' ' spaces

  return 0;
}
