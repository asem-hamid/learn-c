//Program to find the largest and smallest element in an array #include <stdio.h>

#include <stdio.h>

void minMax (int arr[], int len, int *min, int *max);

int main() {

int a[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5}; 

int min, max;

int len = sizeof(a)/sizeof(a[0]);

minMax (a, len, &min, &max);
printf("Minimum value in the array is: %d and Maximum value is: %d", min, max); 

return 0;
}



void minMax (int arr[], int len, int *min, int *max){

   *min = *max = arr[0];
   

    for (int i=1; i<len;i++){

        if (arr[i] > *max){

            *max = arr[i];
        }
        else if (arr[i] < *min){

            *min = arr[i];
        }   

    } 
}
