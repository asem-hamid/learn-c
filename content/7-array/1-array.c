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


// Fibonacci number
int N;
printf("Enter the value of N (N > 2): ");
scanf("%d", &N);

int fib[N];

fib[0] = 0;
fib[1] = 1;

printf("%d\t",fib[0]);
printf("%d\t",fib[1]);

for(int i = 2;i < N;i++){

    fib[i] = fib[i - 1] + fib[i - 2]; 
    

    printf("%d\t",fib[i]);
}
printf("\n");


// Calculate number of element

// number of element = sizeof(name_of_array) / sizeof(name_of_array[0]) ; 


int a[] = {3, 4, 5, 6, 78, 34, 89, 23, 45, 6, 23, 245, 567, 89, 908, 678, 453, 32, 123, 12, 12456, 67, 43, 56, 90, 34, 21, 34, 45, 321, 43, 456, 78, 89, 9045, 3453, 23, 2445, 45, 67, 23, 90, 21, 45, 456, 765, 34, 21, 90, 67, 45, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 56, 32, 12, 234, 67, 56, 67, 78, 9, 901, 89, 34, 45, 6776, 456, 78, 89, 9045, 3453, 23, 2445, 45, 67, 23, 90, 21, 45, 456, 765, 34, 21, 90, 67, 45, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 56, 32, 12, 234, 67, 56, 67, 78, 9, 901, 89, 34, 45, 6776, 43, 456, 78, 89, 9045, 3453, 23, 2445, 45, 67, 23, 90, 21, 45, 456, 765, 34, 21, 90, 67, 45, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 56, 32};

int numofarr = sizeof(a) / sizeof(a[0]);

printf("There are %d element in this array",numofarr);


// if you add const keyword infront of array ,then we can not change value in that array 


const int conarr[5] = {5,9,37,28,19} ;

conarr[2] = 56;  // it will produce error 

    return 0;
}
