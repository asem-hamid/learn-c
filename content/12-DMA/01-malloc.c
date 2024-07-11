#include <stdio.h>
#include <string.h>




int main() {


//malloc()

printf("malloc()\n");

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

float *ptr2;

ptr2 = (float *) malloc(5 * sizeof(float));

ptr2[0] = 3.654;
ptr2[1] = 3.3654;
ptr2[2] = 3.556;
ptr2[3] = 3.473;
ptr2[4] = 3.9632;

for(int i = 0;i <5;i++){
    printf("%f\n",ptr2[i]);
}

return 0;
}


