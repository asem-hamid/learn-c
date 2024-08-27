# Matrix Multiplication 

## Math

```markdown

           A                       B
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

        
            C
     ----------------         
     | 40 | 83 | 36 |
     | 25 | 39 | 13 |       
     | 37 | 70 | 28 |           
     ----------------                                                                    


```


## Pseudo Code

```markdown

                     index
               -------------------   
           0   | 0,0 | 0,1 | 0,1 |
C[3][3] =  1   | 1,0 | 1,1 | 1,2 |  
           2   | 2,0 | 2,1 | 2,2 |
               -------------------
                  0     1     2


 i = row index of A matrix
 j = col index of A matrix
 x = row index of B matrix
 y = col index of B matrix


sum = 0

C[0][0] =        [ i0,j0 * x0,y0 + i0,j1 * x1,y0 + i0,j2 * x2,y0 ]  (j++ , x++)
  /|\                |_______|       |_______|       |_______|
   |                     |               |               |
   |                     |               |               |
   |______ sum = sum + _____     +     _____     +     _____ 
                                              |
                                             \|/     
                                            y + 1
                                              |
                                             \|/  

sum = 0

C[0][1] =        [ i0,j0 * x0,y1 + i0,j1 * x1,y1 + i0,j2 * x2,y1 ]  (j++ , x++)
  /|\                |_______|       |_______|       |_______|
   |                     |               |               |
   |                     |               |               |
   |______ sum = sum + _____     +     _____     +     _____    
                                              |
                                             \|/     
                                            y + 1
                                              |
                                             \|/  

sum = 0

C[0][2] =         [ i0,j0 * x0,y2 + i0,j1 * x1,y2 + i0,j2 * x2,y2 ]  (j++ , x++)
 | /|\                |_______|       |_______|       |_______|
 |  |                     |               |               |
 |  |                     |               |               |
 |  |______ sum = sum + _____     +     _____     +     _____    
 |
\|/     
i + 1
 |
 |  
\|/

sum = 0

C[1][0] =         [ i1,j0 * x0,y0 + i1,j1 * x1,y0 + i1,j2 * x2,y0 ]  (j++ , x++)
 | /|\                |_______|       |_______|       |_______|
 |  |                     |               |               |
 |  |                     |               |               |
 |  |______ sum = sum + _____     +     _____     +     _____    
 |
\|/     
i + 1
 |
 |  
\|/

sum = 0

C[2][0] =        [ i2,j0 * x0,y0 + i2,j1 * x1,y0 + i2,j2 * x2,y0 ]  (j++ , x++)
  /|\                |_______|       |_______|       |_______|
   |                     |               |               |
   |                     |               |               |
   |______ sum = sum + _____     +     _____     +     _____    


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
   
   // i = row index of A matrix
   // j = col index of A matrix
   // x = row index of B matrix
   // y = col index of B matrix
   
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
  for understanding I use j and x
