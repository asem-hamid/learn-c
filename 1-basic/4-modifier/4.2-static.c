// With static modifier 

# include <stdio.h>

int function(){
  
static int num = 0; // static modifier let not to destroy the variable
  
num = num + 1;
  
return num;
}

int main(){
  
printf("\n%d",function()); // 1
printf("\n%d",function()); // 2
printf("\n%d",function()); // 3
  
return 0;
}

/*

1. Static variable remains in memory even if it is
   declared within a block on the other hand automatic 
   variable is destroyed after the completion of function 
   in which it was declared. 

2. Static variable if declared outside the scope of any 
   function will act like global variable but only within 
   the file in which it is declared.

*/
