#include <stdio.h>


int main() {

// fgetc() and fputc() only use for char
// read a file 


FILE *fptr2;

char ch2;

fptr2 = fopen("04.2-fgetc.txt" , "r");


ch2 = fgetc(fptr2);
printf("Character is %c\n",ch2);
ch2 = fgetc(fptr2);
printf("Character is %c\n",ch2);
ch2 = fgetc(fptr2);
printf("Character is %c\n",ch2);
ch2 = fgetc(fptr2);
printf("Character is %c\n",ch2);
ch2 = fgetc(fptr2);
printf("Character is %c\n",ch2);

ch2 = fgetc(fptr2);
while(ch2 != EOF){

    printf("%c",ch2);
    ch2 = fgetc(fptr2);
}

fclose(fptr2);



return 0;
}


