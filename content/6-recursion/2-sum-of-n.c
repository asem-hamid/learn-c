# include <stdio.h>

int nsum(int n);

int main(){

    int s;
    printf("How many first sum of natural numbers do you want to calculate?\n");
    scanf("%d",&s);

    printf("%d\n",sum(s));

return 0;
}

int nsum(int n){
    if(n == 1){
        return 1;
    }
    
    int sumN = nsum(n - 1) + n;
    return sumN;
}
