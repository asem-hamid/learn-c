# include <stdio.h>

const int glovar = 34; // if you add const in global variable you can't change this variable in any function

int main(){

const int var = 67; // if you add const in variable you can't change this variable in this function

var = 57; // you will see error here 

printf("%f\n",var);

return 0;
}
