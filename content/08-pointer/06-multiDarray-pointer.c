// Use multidimensional array with pointer 
// don't worry if you don't understand , check this video  https://youtu.be/3fOPOUnkcdQ?si=WPns1pwCuOA4D8BQ

#include <stdio.h>


int main() {

  printf("2D array\n");

  int x[2][2] = { {1,2}, {3,4} };



   printf("with array index\n");

   printf("%d\n", x[0][0]);
   printf("%d\n", x[0][1]);
   printf("%d\n", x[1][0]);
   printf("%d\n", x[1][1]);




   printf("with pointer\n");
   
   printf("%d\n", **x);
   printf("%d\n", *(*x+1));
   printf("%d\n", **(x+1));
   printf("%d\n", *(*(x+1)+1));


  printf("3D array\n");

  int a[2][2][2] = { { {1,2},{3,4} }, { {5,6},{7,8} } };


   printf("with array index\n");

   printf("%d\n", a[0][0][0]);
   printf("%d\n", a[0][0][1]);
   printf("%d\n", a[0][1][0]);
   printf("%d\n", a[0][1][1]);
   printf("%d\n", a[1][0][0]);
   printf("%d\n", a[1][0][1]);
   printf("%d\n", a[1][1][0]);
   printf("%d\n", a[1][1][1]);



   printf("with pointer\n");
   
   printf("%d\n", ***a);
   printf("%d\n", *(**a+1));
   printf("%d\n", **(*a+1));
   printf("%d\n", *(*(*a+1)+1));
   printf("%d\n", ***(a+1));
   printf("%d\n", *(**(a+1)+1));
   printf("%d\n", **(*(a+1)+1));
   printf("%d\n", *(*(*(a+1)+1)+1));


  return 0;
}


