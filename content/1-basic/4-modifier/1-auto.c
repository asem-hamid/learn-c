# include <stdio.h>

//auto
// auto means variable will auto destroy  after the block or function end , variable is  by default  auto variable , you don't have to use it .

int var2  ; 

int main() {

int var1 ;

auto int var3;

printf("%d\n", var1); 
printf("%d\n", var2); // global variable by default initialized with 0 
printf("%d\n", var3); // auto variable by default initialized with garbage(random) value 

return 0;
}

