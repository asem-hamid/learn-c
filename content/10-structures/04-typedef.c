#include <stdio.h>
#include <string.h>



typedef struct computerscienceengineer{
    int roll;
    float cgpa;
    char name[100]; 
}cses;  // typedef allow you to take a short name for datatype



int main() {

// typedef keyword

    cses c5 ;

    c5.roll = 124135;
    c5.cgpa = 3.49;
    strcpy(c5.name , "rohit");


    printf("Roll is %d\n",c5.roll);
    printf("cgpa is %f\n",c5.cgpa);
    printf("name is %s\n",c5.name);
    


return 0;
}


