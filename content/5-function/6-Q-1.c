// What will func(435) return ?

# include <stdio.h>

int func(int num);

int main(){

printf("count = %d\n",func(435));

return 0;
}

int func(int num){

int count = 0; 

while(num){

count++;
num >>= 1;

}

return(count);
}
