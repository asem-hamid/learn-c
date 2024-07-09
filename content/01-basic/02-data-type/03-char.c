# include <stdio.h>

int main (){


char x ;
char y = 'Y' ;

x = 'X' ; 

printf("%c\n",x);
printf("%c\n",y);

int i = 66 ;
int j = '6' ;
int k = 6 ;


printf("%c\n",i);
printf("%c\n",j);
printf("%c\n",k);

/*
Size of character = 1byte

Signed character range: -128 to +127

Unsigned character range: 0 to 255

Negative values won't buy you any additional powers

In traditional ASCII table, each character requires 7 bits.
In extended ASCII table, each character utilize all 8 bits.
*/

return 0 ;
}
