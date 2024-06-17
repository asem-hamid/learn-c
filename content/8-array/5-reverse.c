// Reverse an array


#include <stdio.h>

void arrayreverse(int Rarr[], int length);
void callRarr(int Rarr[],int length);

int main() {


int Rarr[] = {1,2,3,4,5};
int length = 5;

arrayreverse(Rarr,length);
callRarr(Rarr,length);;



    return 0;
}



void arrayreverse(int Rarr[], int length){

   for (int i = 0; i < length/2 ; i++){
     
     int first_value = Rarr[i];
     int final_value = Rarr[length - i - 1];

     Rarr[i] = final_value;
     Rarr[length - i - 1] = first_value;
   }
     
}

void callRarr(int Rarr[],int length){

    for(int i = 0;i < length;i++){

        printf("%d\t",Rarr[i]);
    }
      printf("\n");
}
