// We can use macros like functions.

#include <stdio.h>

#define add(x, y) x+y

int main() {
  
printf("addition of two numbers: %d", add (4, 3));
  
return 0;
}
