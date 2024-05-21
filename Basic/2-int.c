# include <stdio.h>
# include <limits.h>

int main (){

int x ;
int y = 6 ;

x = 5

printf("%d\n",x);
printf("%d\n",y);


printf("%d\n",sizeof(int));

printf("%d\n",sizeof(short int));

printf("%d\n",sizeof(long int));

//unsigned int means only positive number 
//signed int means nev  and pos both -- default  int means signed int


/* In your device size of int is 4  it can hold 
   number -2147483648 to 2147483628 */

int var1 = INT_MIN; // To use INT_MIN you need <limits.h> 
int var2 = INT_MAX; // To use INT_MAX you need <limits.h> 

printf("range of signed int is %d to %d\n", var1 , var2);

unsigned int var3 = 0; 
unsigned int var4 = UINT_MAX; // To use UINT_MAX you need <limits.h> 

printf("range of unsigned int is %u to %u\n", var3 , var4);

short int var5 = SHRT_MIN; // To use SHRT_MIN you need <limits.h> 
short int var6 = SHRT_MAX; // To use SHRT_MAX you need <limits.h> 

printf("range of signed short int is %d to %d\n", var5 , var6);

short unsigned int var7 = 0; 
short unsigned int var8 = USHRT_MAX; // To use USHRT_MAX you need <limits.h> 

printf("range of unsigned short int is %d to %d\n", var7 , var8);

/* 
if sizeof (long int) = 4 bytes then sizeof (long long int) = 8 bytes 

else if sizeof (long int) = 8 bytes then sizeof (long long int) = 8 bytes 
*/

/*
1. sizeof (short) <= sizeof (int) <= sizeof (long).  
2. %d is used to print "signed integer" 
3. %u is used to print "unsigned integer" 
4. %ld is used to print "long integer" equivalent to "signed long integer" 
5. %lu is used to print "unsigned long integer" 
6. %ld is used to print "long long integer" 
7. %llu is used to print "unsigned long long integer"
*/

return 0 ;
}
