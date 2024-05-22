# include <stdio.h>

// scope = lifetime
// scope 2 type = local variable and global  variable


int var2 = 10 ; // var2 is  global variable , it will  work in every function/block

int main() {

int var = 34;  // var is  local variable , it will only work in this function

printf("%d\n", var);

     {
        printf("%d\n", var); // we can use var here because it is inner block
       
        int var = 65; // we can re initialise var because it is a new block
        
        printf("%d\n", var);

        printf("%d\n", var2);
     }

printf("%d\n", var); // content of inner block are not visible to outer block 


printf("%d\n", var2);

return 0;
}

int fun()

{

printf("%d\n", var); // var will not work in this function because it is outter block   // comment out this whole line if you see error

printf("%d\n", var2);

}

