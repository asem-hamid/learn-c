# include <stdio.h>

int sum(int a,int b);

int main(){

//sum
int a , b;

printf("enter a\n");
scanf("%d",&a);

printf("enter b\n");
scanf("%d",&b);

int s = sum( a, b);

printf("sum = %d\n",s);

return 0;
}

int sum(int a,int b){
    return a + b;
}
