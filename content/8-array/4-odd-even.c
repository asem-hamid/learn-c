// Find odd and even number

#include <stdio.h>

void how_many_odd (int Oarr[] ,int *oddnum,int *evennum);

int main() {


int oddnum = 0;
int evennum = 0;
int Oarr[] = {1,2,3,4,5,6,7};
 
how_many_odd (Oarr , &oddnum,&evennum);

printf("odd number = %d\n",oddnum);
printf("even number = %d\n",evennum);



    return 0;
}


void how_many_odd (int Oarr[] ,int *oddnum,int *evennum){
      
      
    for(int i = 0;i < 7;i++){

        if(Oarr[i] % 2 != 0){

           (*oddnum)++;
        }
        else if(Oarr[i] % 2 == 0){

           (*evennum)++;
        }
   
    }

}
