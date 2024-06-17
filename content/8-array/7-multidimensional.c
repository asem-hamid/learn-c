// Multidimensional Array


#include <stdio.h>


int main() {

// 2D Array

int Marr[3][3] = {{45,65,78},{90,64,79},{56,38,12}};

/*  
     ----------------
     | 45 | 65 | 78 |
     | 90 | 64 | 79 |
     | 56 | 38 | 12 |
     ----------------
*/

printf("%d\n",Marr[0][0]); //45
printf("%d\n",Marr[0][1]); //65
printf("%d\n",Marr[0][2]); //78
printf("%d\n",Marr[1][0]); //90
printf("%d\n",Marr[1][1]); //64
printf("%d\n",Marr[1][2]); //79
printf("%d\n",Marr[2][0]); //56
printf("%d\n",Marr[2][1]); //38
printf("%d\n",Marr[2][2]); //12


// size of Marr[3][3] = 3 * 3 = 9 element or 9 * 4 = 36 byte

// size of [4][10][20] = 4 * 10 * 20 = 800 element or 800 * 4 = 3200 byte 



// 2D array elements can be printed using two nested for loops.

int arr2d[2][3] = {{1, 2, 3},
                  {4, 5, 6}};


    for(int i=0; i<2; i++){

        for(int j=0; j<3; j++){

          printf("%d ", arr2d[i][j]);
                 
        } 
       printf("\n");
    }


// 3D Array

int arr3d[2][3][3] = {{{3,9,7},{4,2,1},{6,1,5}},
                     {{5,7,2},{2,3,1},{1,5,3}}};

/*   
     -------------           -------------
     | 3 | 9 | 7 |           | 5 | 7 | 2 |
     | 4 | 2 | 1 |           | 2 | 3 | 1 |
     | 6 | 1 | 5 |           | 1 | 5 | 3 |
     -------------           -------------
*/

    for(int i=0; i<2; i++){

        for(int j=0; j<3; j++){

            for(int k =0; k<3;k++){

              printf("%d ", arr3d[i][j][k]);

            } 
            printf("\n");
        } 
        printf("\n");
    }
    return 0;
}




    return 0;
}
