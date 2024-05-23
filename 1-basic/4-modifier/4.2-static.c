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
