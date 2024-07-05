#include <stdio.h>

void storetable(int table[][10], int r,int c,int number);

int main() {


int table[2][10];

storetable(table, 0, 10, 2);
storetable(table, 1, 10, 3);

    for(int i = 0;i < 10;i++){
        printf("%d\n",table[0][i]);
    }

    printf("\n");

    for(int i = 0;i < 10;i++){
        printf("%d\n",table[1][i]);
    }
    printf("\n");



    return 0;
}



void storetable(int table[][10], int r,int c,int number){

    for(int i = 0;i < c;i++){

        table[r][i] = number * (i + 1);
    }
}
