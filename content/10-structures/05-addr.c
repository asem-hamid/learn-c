#include <stdio.h>
#include <string.h>


typedef struct address{  // here struct student is data type 
    int houseno;
    int block;
    char city[50];
    char state[50];
}addr;

void printaddr(addr address);

int main() {


// Enter  address of 5 person



    addr address[5];

    for(int i = 0;i <5;i++){

        printf("Enter address of person no %d \n",i+1);
        printf("House no :");
        scanf("%d",&address[i].houseno);
        printf("Block :");
        scanf("%d",&address[i].block);
        printf("City :");
        scanf("%s",&address[i].city);
        printf("State :");
        scanf("%s",&address[i].state);

    }

    printaddr(address[0]);
    printaddr(address[1]);
    printaddr(address[2]);
    printaddr(address[3]);
    printaddr(address[4]);


return 0;
}


void printaddr(addr address){

printf("The address of person no  is : %d , %d ,%s ,%s \n", address.houseno ,address.block , address.city , address.state);

}


