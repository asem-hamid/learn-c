#include <stdio.h>


int main() {

FILE *fptr;

fptr = fopen("03.2-write.txt" , "w"); 

// To  open and write a new file use "w" , also "w" remove all old data . 
// If you use "a" it will not remove old data 

char ch;


//write a file

ch = 'M';
fprintf(fptr , "%c",ch);
ch = 'A';
fprintf(fptr ,"%c",ch);
ch = 'H';
fprintf(fptr,"%c",ch);
ch = 'I';
fprintf(fptr,"%c",ch);
ch = 'N';
fprintf(fptr, "%c",ch);
ch = ' ';
fprintf(fptr, "%c",ch);

fclose(fptr);
return 0;
}


