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



      char str1[10] = "Hello"; 
      char str2[10];
      char str3[10];
      
      strcpy(str3, strcpy(str2, str1)); 
      printf("%s %s", str2, str3);
  
  
  return 0;
}
