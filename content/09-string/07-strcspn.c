// standard library functions for string  ( to use we have to add <string.h>  )

#include <stdio.h>
#include <string.h>


int main() {


  // strcspn(str, set) - returns the index of the first character in string that is in set

    printf("5.strcspn(str, set)\n");

      char str5[] = "World";

      printf("%d\n",strcspn(str5, "r"));
    

    return 0;
}
