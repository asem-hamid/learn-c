#include <stdio.h>



int main() {

    // scanf cannot input multi-word string with spaces
    // we have to use fgets() and puts()
    // fgets(string, n , file) for input  // here n means length of string 
    // puts(string) for output 

    char tryfgetsputs[50];
    
    printf("Enter a string: ");
    fgets(tryfgetsputs , 50, stdin);  // when you input some thing using fgets() it's store in memory like this > "Asem Hamid\n\0"

    puts("You entered:");
    puts(tryfgetsputs);

// input name and print it's length

    char namelength[100];
    
    printf("Enter a name: ");
    fgets(namelength, 100, stdin);
    printnamelength(namelength);

  return 0;
}




