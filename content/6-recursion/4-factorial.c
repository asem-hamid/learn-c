# include <stdio.h>

int factorial(int f);

int main(){


    int f;
    printf("How many number factorials do you want?\n");
    scanf("%d",&f);

    printf("%d\n",factorial(f));

return 0;
}

int factorial(int f){
    if(f == 1){
        return 1;
    }
    int factorialNm1 = factorial(f - 1);
    int factorialN = factorialNm1 * f ;
}
