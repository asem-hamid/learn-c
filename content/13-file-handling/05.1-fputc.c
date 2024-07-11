#include <stdio.h>


int main() {

// fgetc() and fputc() only use for char
//write a file

FILE *fptr2;



fptr2 = fopen("05.2-fputc.txt" , "a");



fputc('M', fptr2);
fputc('a', fptr2);
fputc('n', fptr2);
fputc('g', fptr2);
fputc('o', fptr2);
fputc(' ', fptr2);

fclose(fptr2);

return 0;
}


