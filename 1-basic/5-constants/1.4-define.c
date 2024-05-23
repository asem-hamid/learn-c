// Some predefined macros like ___DATE___, _TIME__ can print current date and time.

#include <stdio.h>

int main() {
  
printf("Date: %s\n", _DATE__);
printf("Time: %s\n", _TIME__); 
  
return 0;

}
