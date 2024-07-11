#include <stdio.h>


int main() {


//file open modes 
 
    // "r"  open to read      

            // if file don't exist it will store NULL in pointer

    // "rb"  open to read in binary


    // "w"  open to write 

            // if file don't exist it will create a file 

    // "wb"  open to write in binary


    // "a"  open to append   

            // "w" or "wb"  overwrites the existing content of the file, while "a" and "ab" appends data to the end of the file.

    // "ab" open to append in binary 


// check file existance 

FILE *newptr;

newptr = fopen("01-newio.txt","r");  // to open a file use fopen()

if (newptr == NULL){
    
    printf("File does not exist\n"); 

}
else{

    fclose(newptr); // to close a fole use fclose

}


return 0;
}
