# include <stdio.h>

void table (int n);

int main(){

//table
int n;

printf("enter n for table\n");
scanf("%d",&n);

table(n);

return 0;
}

void table (int n){
    
    for(int i = 1;i <= 10;i++){
        printf("%d * %d = %d\n",n, i ,n * i);
    }

}
