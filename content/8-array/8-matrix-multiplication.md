# Matrix Multiplication

## Math

```md


     -------------           -------------
     | 3 | 9 | 7 |           | 5 | 7 | 2 |
     | 4 | 2 | 1 |     *     | 2 | 3 | 1 |
     | 6 | 1 | 5 |           | 1 | 5 | 3 |
     -------------           -------------

                       =

     -------------------------------------------------------------------------                                                                       
     | 3 * 5 + 9 * 2 + 7 * 1 | 3 * 7 + 9 * 3 + 7 * 5 | 3 * 2 + 9 * 1 + 7 * 3 |          
     | 4 * 5 + 2 * 2 + 1 * 1 | 4 * 7 + 2 * 3 + 1 * 5 | 4 * 2 + 2 * 1 + 1 * 3 |                                                                      
     | 6 * 5 + 1 * 2 + 5 * 1 | 6 * 7 + 1 * 3 + 5 * 5 | 6 * 2 + 1 * 1 + 5 * 3 |                                                                
     -------------------------------------------------------------------------     

            =            
 
     ----------------         
     | 40 | 83 | 36 |
     | 25 | 39 | 13 |       
     | 37 | 70 | 28 |           
     ----------------                                                                    


```


## Pseudo Code

```md

```

## C Code

```c

#include <stdio.h>

int main() {

   int a[3][3] = {

       {3,9,7},
       {4,2,1},
       {6,1,5} 

   }; 

   int b[3][3] = {

       {5,7,2},
       {2,3,1},
       {1,5,3}

   };
   
   int c[3][3];
   
   // i = A row no
   // j = A col no
   // x = A row no
   // y = A col no
   
   for(int i = 0;i < 3;i++){
      
       for(int y = 0;y < 3;y++){

           int sum = 0;

           for(int j = 0,x = 0;j < 3 && x < 3;j++,x++){  

               sum += a[i][j] * b[x][y];
                
           }

           c[i][y] = sum;
            printf("%d ",sum);
       }
        
        printf("\n");
   }

    return 0;
}

```

### Note

- You can take input length of row , column and element [using two nested loops](https://github.com/asem-hamid/learn-c/blob/c8335e61149ba243929daf1e6ef49707c318f3dc/content/8-array/7-multidimensional.c#L38) .
- To multiply two matrices, the number of columns in the first matrix must be equal to the number of rows in the second matrix.
- In the third nested loop, we can use a single variable instead of two (j and x) like this:

  ```c

           for(int k = 0;k < 3 ;k++){  

               sum += a[i][k] * b[k][y];
                
           }

  ```
  for understanding i take j and x
