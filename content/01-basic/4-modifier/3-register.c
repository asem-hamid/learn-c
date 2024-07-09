# include <stdio.h>

int main(){

register int var;

return 0;
}


/*

Register keyword hints the compiler to store a variable in register memory.

This is done because access time reduces greatly for most frequently referred variables.

This is the choice of compiler whether it puts the given variable in register or not.

Usually compiler themselves do the necessary optimizations

*/
