#include <stdio.h>
#include <string.h>

struct student {

  int roll ;
  float cgpa;
  char name[100];
};



int main() {

    struct student s1;

    s1.roll = 124109;
    s1.cgpa = 3.40;
    //s1.name = "asem"; // will not work  because you can't change array directly
    strcpy(s1.name , "Asem");


    printf("Roll is %d\n",s1.roll);
    printf("cgpa is %f\n",s1.cgpa);
    printf("name is %s\n",s1.name);


    struct student s2;

    s2.roll = 124145;
    s2.cgpa = 3.04;
    strcpy(s2.name , "mahi");


    printf("Roll is %d\n",s2.roll);
    printf("cgpa is %f\n",s2.cgpa);
    printf("name is %s\n",s2.name);


    struct student s3;

    s3.roll = 124189;
    s3.cgpa = 3.63;
    strcpy(s3.name , "sakil");


    printf("Roll is %d\n",s3.roll);
    printf("cgpa is %f\n",s3.cgpa);
    printf("name is %s\n",s3.name);


    struct student s4 ={124130 ,3.36 , "rahat"};


    printf("Roll is %d\n",s4.roll);
    printf("cgpa is %f\n",s4.cgpa);
    printf("name is %s\n",s4.name);


return 0;
}


