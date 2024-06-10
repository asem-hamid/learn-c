# include <stdio.h>

int nsum(int n);

int main(){

printf("sum of n number is %d\n", nsum(5));

return 0;
}

int nsum(int n){
    if(n == 1){
        return 1;
    }
    
    int sumN = nsum(n - 1) + n;
    return sumN;
}
