# include <stdio.h>

int callreference(int *ptr_a,int *ptr_b);

int main(){

printf("call by reference\n");

int p = 10, q = 20;

callreference( &p,&q);

printf("p = %d , q = %d\n", p,q);

return 0;
}

int callreference(int *ptr_p,int *ptr_q){

    *ptr_p = 20;
    *ptr_q = 10;

}
