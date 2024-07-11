#include <stdio.h>
#include <stdlib.h>


int main() {


// calloc()

printf("calloc()\n");

float *ptr3;

int n;

printf("enter n for calloc\n");
scanf("%d",&n);

ptr3 = (float *) calloc(n , sizeof(float));

ptr3[3] = 4.35;


for(int i = 0;i < n;i++){
    printf("%f\n",ptr3[i]);
}


return 0;
}
