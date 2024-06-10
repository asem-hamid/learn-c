# include <stdio.h>

int fibonacci(int fib);

int main(){

    int fib;
    printf("which term of fibonacci sequence do you want?\n");
    scanf("%d",&fib);

    printf("The %dth Fibonacci number is: %d\n", fib, fibonacci(fib));

return 0;
}

int fibonacci(int fib){
    if(fib == 0){
        return 0;
    }
    
    if(fib == 1){
        return 1;
    }
    
    int fibNm2 = fibonacci(fib - 2);
    int fibNm1 = fibonacci(fib - 1);

    int fibN = fibNm2 + fibNm1;

    return fibN;
}
