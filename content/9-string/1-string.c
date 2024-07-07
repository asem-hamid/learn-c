#include <stdio.h>

void printstring(char string[]);

int main() {

    char name[]={'A','s','e','m','\0'};
    char name2[]="Asem";

    char firstname[]="Asem"; // you don't have to write ' \0 ' here but there will a space in memory where '\0' will be automatic store by compiler
    char lastname[]="Hamid";
    

    printstring(firstname);
    printstring(lastname);


    // the %s format specifier is used with printf and scanf functions for working with strings
    

    char city[50];
    printf("Enter a city name: ");
    scanf("%s", city);

    printf("your city name is %s\n", city);

    printf("%s\n", "My name is Asem.""I am from Dhaka,Bangladesh\n");
  
    printf("%s\n", "My name is Asem.\n""I am from Dhaka,Bangladesh\n");

// Clear input buffer
while (fgetchar() != '\n');

// you no need to clear input buffer here , but want to switch from scanf to another input function like fgets or getchar , You are mixing scanf with %c format specifier to read single characters , you need to clear input buffer .

  return 0;
}



void printstring(char string[]){
    for(int i = 0;string[i] != '\0';i++){
        printf("%c", string[i]);
    }

    printf("\n");
}
