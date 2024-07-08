// standard library functions for string  ( to use we have to add <string.h>  )

#include <stdio.h>
#include <string.h>


int main() {

  //  strcpy(newstr , oldstr) - copy old string to new string 


     printf("strcpy(newstr , oldstr)\n");

      char new[] = "Hello";
      char old[] = "world";

      puts(new);
      puts(old);

      strcpy(new , old);

      puts(new);
      puts(old);


  //   remember new string array size must be bigger or equal to old string array

      char new2[10] = "Asem";
      char old2[]  = "rockandroll";
      
      puts(new2);
      puts(old2);

      strcpy(new2 , old2);

      puts(new2);
      puts(old2);
  
  
  return 0;
}
