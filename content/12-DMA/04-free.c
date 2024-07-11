#include <stdio.h>
#include <stdlib.h>


int main() {

//free 

// this function use to free dynamic memory allocation



int *ptr1;

ptr1 = (int *) malloc(5 * sizeof(int));

ptr1[0] = 1;
ptr1[1] = 3;
ptr1[2] = 5;
ptr1[3] = 7;
ptr1[4] = 9;

for(int i = 0;i <5;i++){
    printf("%d\n",ptr1[i]);
}

free(ptr1);

ptr1 = NULL; // it's a good practice to add NULL value to the pointer after use free()

return 0;
}


