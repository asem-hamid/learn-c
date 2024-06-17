#include <stdio.h>

int main() {

int level[5] = {1 ,2 ,3 ,4 ,5}; // Here 5 means array size or we can hold 5 int data in this array

int exp[] = {1,4,6,2,6}; // you can also initialize with empty length

// In C array use 0 base index . means :

printf("%d\n",level[0]);
printf("%d\n",level[1]);
printf("%d\n",level[2]);
printf("%d\n",level[3]);
printf("%d\n",level[4]);

// We can print array with loops

    for(int i = 0;i < 5;i++){

       printf("%d\n",level[i]);
   
    }



int values[3] ={4 };

scanf("%d",&values[1]);
scanf("%d",&values[2]);


printf("%d ,%d , %d \n",values[0],values[1],values[2]);

// What if number of elements are lesser than the length specified?

int arr[10] = {45, 6, 2, 78, 5, 6};

// The remaining locations of the array are filled by value Q.
// int arr[10] = {45, 7, 2, 78, 5, 6, 0, 0, 0, 0};


//We can also initialize like this

int arr2[10] = {[0] = 13, [5] = 43, [9] = 23,[6] = 30};

// it means
// int arr[10] = {13, 0, 0, 0, 0, 43, 30, 0, 0, 23};



// if you write some thing like this 

int arr3[] = {[0] = 46, [15] = 13, [9] = 28,[49] = 86};

// it means
// array length is 50 (largest index + 1)

    return 0;
}
