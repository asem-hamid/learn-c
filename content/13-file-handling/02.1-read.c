#include <stdio.h>


int main() {

// read a file 


FILE *fptr;

fptr = fopen("try2io.txt" , "r"); // to read use r

char ch;

int num;




fscanf(fptr , "%c" , &ch);
printf("Character is %c\n",ch);
fscanf(fptr , "%c",&ch);
printf("Character is %c\n",ch);
fscanf(fptr,"%c",&ch);
printf("Character is %c\n",ch);
fscanf(fptr, "%c", &ch);
printf("Character is %c\n",ch);
fscanf(fptr, "%c", &ch);
printf("Character is %c\n",ch);


fscanf(fptr, "%d", &num);
printf("NUM is %d\n",num);
fscanf(fptr, "%d", &num);
printf("NUM is %d\n",num);
fscanf(fptr, "%d", &num);
printf("NUM is %d\n",num);


return 0;
}


