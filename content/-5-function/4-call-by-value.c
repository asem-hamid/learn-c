# include <stdio.h>

int callvalue(int x,int y);

int main(){

printf("call by value\n");

int x = 10, y = 20;

callvalue( x, y);

printf("x = %d , y = %d\n", x,y);

return 0;
}

int callvalue(int x,int y){

    x = 20;
    y = 10;

}
