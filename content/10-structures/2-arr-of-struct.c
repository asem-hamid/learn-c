#include <stdio.h>
#include <string.h>

struct student{

  char name[100];
  int  roll;
  float  cgpa;
};

int main() {

// Array of Structures
 
    struct student cse[100];
    struct student eee[100];
    struct student it [100];

    cse[0].roll = 39;
    cse[0].cgpa = 3.28;
    strcpy(cse[0].name , "rahim");


    printf("roll is %d\n",cse[0].roll);
    printf("cgpa is %f\n",cse[0].cgpa);
    printf("name is %s\n",cse[0].name);

    cse[1]= (struct student){"fahim" ,56 , 3.75};// We have to use (struct student) to assign in a single line in array


    printf("roll is %d\n",cse[1].roll);
    printf("cgpa is %f\n",cse[1].cgpa);
    printf("name is %s\n",cse[1].name);


    eee[0] = (struct student){"rahim",29 ,3.83};

    printf("roll is %d\n",eee[0].roll);
    printf("cgpa is %f\n",eee[0].cgpa);
    printf("name is %s\n",eee[0].name);


return 0;
}




