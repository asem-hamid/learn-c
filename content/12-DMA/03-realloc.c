#include <stdio.h>
#include <stdlib.h>


int main() {


//realloc 
//reallocate (increase or decrease) the memory

printf("realloc()\n");



int *ptr4;

ptr4 = (int *) malloc(5 * sizeof(int));

ptr4[0] = 2;
ptr4[1] = 4;
ptr4[2] = 6;
ptr4[3] = 8;
ptr4[4] = 10;



for(int i = 0;i < 5;i++){
    printf("%d\n",ptr4[i]);
}


ptr4 = realloc(ptr4 , 8 * sizeof(int));

ptr4[5] = 12;
ptr4[6] = 14;
ptr4[7] = 16;


for(int i = 0;i < 8;i++){
    printf("%d\n",ptr4[i]);
}

return 0;
}


