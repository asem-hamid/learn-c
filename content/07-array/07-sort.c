#include <stdio.h>

int main() {

    int arrr[] = {5,2,8,9,4,4,1,8,2};

    int length = sizeof(arrr)/sizeof(arrr[0]);

    int temp;

    
        // Sorting Logic

           for(int i = 0;i <  length;i++){

                for(int j = 0;j < length;j++){

                    if(arrr[i] < arrr[j]){

                        temp = arrr[i];
                        arrr[i] = arrr[j];
                        arrr[j] = temp;

                    }        
                }
           }



    //print

    for(int i = 0;i < length;i++){

       printf("%d = %d\n",i,arrr[i]);

    }

    return 0;
}
