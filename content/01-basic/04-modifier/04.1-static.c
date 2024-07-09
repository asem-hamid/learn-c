// Without static

# include <stdio.h>

int function(){
  
 int num = 0;
  
num = num + 1;
  
return num;
}

int main(){
  
printf("\n%d",function());  // 1
printf("\n%d",function());  // 2
printf("\n%d",function());  // 3
  
return 0;
}
