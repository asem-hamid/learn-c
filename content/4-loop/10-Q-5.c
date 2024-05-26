// Fibonacci number

# include <stdio.h>

int main(){



int N;
int Nm2 = 0; 
int Nm1 = 1; 

printf("Enter the value of N: ");
scanf("%d", &N);


    if (N == 0) {
        printf("0");
    } 
    else if (N == 1) {
        printf("1");
    } 
    else {
        int fib = 0; 

        
        for (int i = 2; i <= N; i++) {
            fib = Nm1 + Nm2; 

           
            Nm2 = Nm1;
            Nm1 = fib;
        }

        printf("%d", fib);
    }

//n = 
//N  = 
//Nm2  = 
//Nm1 = 
//0,1,1,2,3,5,8,13

return 0;
}
