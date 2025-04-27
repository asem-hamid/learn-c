// Remove the trailing newline character that fgets adds

#include<stdio.h>
#include<string.h>


int main(){

  char inputpass[50];
  printf("Enter your password\n");

  fgets( inputpass, sizeof(inputpass),stdin);

  // Remove the trailing newline character that fgets adds
  inputpass[strcspn(inputpass, "\n")] = '\0';

        // we can also do this 
        size_t len = strlen(inputpass);
        if (len > 0 && inputpass[len - 1] == '\n') {
            inputpass[len - 1] = '\0';
        }

        



    return 0;
}
