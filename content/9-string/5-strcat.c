// standard library functions for string  ( to use we have to add <string.h>  )

#include <stdio.h>
#include <string.h>


int main() {

  // strcat(firststr , secstr) - cocatenation between 2 string
 
     printf("strcat(firststr , secstr)\n");

      char first[] = "Hello";
      char sec[] =   "world";

      puts(first);
      puts(sec);
      strcat(first , sec);
      puts(first);
      puts(sec);

      printf("\n");


    // you have to add space your own

      char first1[] = "Hello ";
      char sec1[] =   "world";

      puts(first1);
      puts(sec1);

      strcat(first1 , sec1);

      puts(first1);
      puts(sec1);

      printf("\n");


  //   remember new string array size must be bigger  to hold second string array with first one .

      
      char first2[100] = "Hello, ";
      char sec2[] = "I am from Bangladesh.";

      puts(first2);
      puts(sec2);
      
      strcat(first2 ,sec2);

      puts(first2);
      puts(sec2);

      

  
  return 0;
}


