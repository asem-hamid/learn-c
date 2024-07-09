# include <stdio.h>

void printhello();
void printbonjour();
void printgoodbye();

int main(){

int c;
printf("Where are you from? \n");
printf("1- England 2- French \n");
scanf("%d",&c);

if(c == 1){

    printhello();
    
}

else if(c == 2){

    printbonjour();

}
else{

    printgoodbye();
    
}

return 0;
}

void printhello(){

    printf("Hello\n");

}

void printbonjour(){

    printf("Bonjour\n");

}

void printgoodbye(){

    printf("Goodbye\n");

}
