#include <stdio.h>

int main(){

printf("Part 4  : Logical  Operators   \n");

printf(" if it print 1 it is ture and if it print 0 it is false\n");

// &&  - and operator - if every value is ture it will print ture (1)

printf ("%d\n", (4>3)&&(7>4));
printf ("%d\n", (3>5)&&(4>2));
printf ("%d\n", (3>5)&&(5>8));
printf ("%d\n\n", (8>4)&&(5>3)&&(4>9));

// || - or operator - if any single value is ture it will print ture (1)

printf ("%d\n", (5>2)||(3>4));
printf ("%d\n", (6>7)||(5>3));
printf ("%d\n", (3>5)||(5>9));
printf ("%d\n\n", (4>7)||(4>6)||(4>2));

// ! - not  operator - it change ture to false and false to ture

printf ("%d\n", !(9>4));
printf ("%d\n\n", !(6>9));

printf ("%d\n", !((4>5)&&(5>6)));
printf ("%d\n", !((4>2)||(4>3)));
printf ("%d\n", !((4==4)&&(3!=5)));
printf ("%d\n", !((7>4)||(4>9)));
printf ("%d\n\n", !((9>3)||(6>8)));

printf ("%d\n", ((4+3*14/2)>(5+1*6*2)));
printf ("%d\n", !((4+3*14/2)>(5+1*6*2)));
printf ("%d\n", (((2+5+8*2-1)>(4/2+6*3))&&((4+2/3*4+7)>(5+6-3/3))));
printf ("%d\n", !(((2+5+8*2-1)>(4/2+6*3))&&((4+2/3*4+7)>(5+6-3/3))));
printf ("%d\n", (((2+5+8*2-1)>(4/2+6*3))||((4+2/3*4+7)>(5+6-3/3))));
printf ("%d\n\n", !(((2+5+8*2-1)>(4/2+6*3))||((4+2/3*4+7)>(5+6-3/3))));


return 0;
}
