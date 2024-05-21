# include <stdio.h>


struct student{
    int roll;
    float cgpa;
    char name[100]; 
};

int main (){

printf("%d\n",sizeof(int));
printf("%d\n",sizeof(float));
printf("%d\n",sizeof(char));

printf("%d\n",sizeof(struct student));

return 0 ;
}
