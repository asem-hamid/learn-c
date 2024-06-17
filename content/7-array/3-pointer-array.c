#include <stdio.h>

int main() {


                 /* Pointer increment and decrement */

int arr1[5] = {1, 2, 3, 4, 5};
int *ptr1 = arr1;  // Pointer points to the first element of the array


printf("%d\n",*ptr1);
ptr1++;           // Move the pointer to the next element
printf("%d\n",*ptr1);



int arr2[5] = {1, 2, 3, 4, 5};
int *ptr2 = &arr2[3];  // Pointer points to the fourth element of the array

printf("%d\n",*ptr2);
ptr2--;               // Move the pointer to the previous element
printf("%d\n",*ptr2);

printf("new\n");

/*The amount of increment and decrement depends on the size of the data type the pointer is pointing to.
  example : for int pointer increment or decrement 4 byte
            for float pointer increment or decrement 4 byte
            for char pointer increment or decrement 1 byte                                               */

float price = 100.00;
float *poin = &price;
printf("%u\n",poin);
poin++;
printf("%u\n",poin);
poin--;
printf("%u\n",poin);

printf("new\n");

int nid[5];

//input

int *Nptr = nid;
for(int i = 0;i <= 4;i++){

  printf("%d no index :\n",i);
  scanf("%d", (Nptr + i)); // we can also use this &nid[i]
}

//output

for(int i = 0;i <= 4;i++){

   printf("%d no index = %d\n", i, *(Nptr + i)); // we can also use this nid[i]
}




    return 0;
}
