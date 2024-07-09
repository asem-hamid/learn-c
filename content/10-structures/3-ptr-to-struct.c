#include <stdio.h>
#include <string.h>

struct student{

  char name[100];
  int  roll;
  float cgpa;
};

int main() {


// pointers to structures
    
    struct student s21 = {"David", 26 ,3.16};

    struct student *ptr = &s21;

    printf("student info by pointer\n");
    printf("roll is %d\n",(*ptr).roll);
    printf("cgpa is %f\n",(*ptr).cgpa);
    printf("name is %s\n",(*ptr).name);





return 0;
}




