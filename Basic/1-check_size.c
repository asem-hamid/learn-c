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


/* In your device size of int is 4  it can hold 
   number -2147483648 to 2147483628 */

return 0 ;
}
