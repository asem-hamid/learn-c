// standard library functions for string  ( to use we have to add <string.h>  )

#include <stdio.h>
#include <string.h>


int main() {

  // strcmp(firststr , secstr) - campare(ASCII) 2 string & return value . 0 = equal  , +1 = first > sec  , -1 = first < sec



     printf("strcmp(firststr , secstr)\n");

      char firststr[] = "World";
      char secstr[] = "Hello";

      puts(firststr);
      puts(secstr);
      printf("%d\n",strcmp(firststr , secstr));


      printf("\n");


      char firststr2[] = "apple";
      char secstr2[] = "banana";

      puts(firststr2);
      puts(secstr2);
      printf("%d\n",strcmp(firststr2 , secstr2));


      printf("\n");


      char firststr3[] = "banana";
      char secstr3[] = "apple";

      puts(firststr3);
      puts(secstr3);
      printf("%d\n",strcmp(firststr3 , secstr3));


      printf("\n");


      char firststr4[] = "HHHO";
      char secstr4[] = "HHHP";

      puts(firststr4);
      puts(secstr4);
      printf("%d\n",strcmp(firststr4 , secstr4));


      printf("\n");


      char firststr5[] = "HHH";
      char secstr5[] = "HHH";

      puts(firststr5);
      puts(secstr5);
      printf("%d\n",strcmp(firststr5 , secstr5));
      printf("\n");


  return 0;
}




