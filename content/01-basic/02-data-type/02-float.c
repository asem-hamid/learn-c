# include<stdio.h>


int main() {

float var1 = 3.1415926535897932;
double var2 = 3.1415926535897932;
long double var3 = 3.14159265358979323846264338327950288;  //if it's not work on your pc don't panic , it's may be system problem

printf("float: %.20f\n", var1);
printf("double: %.20lf\n", var2);
printf("long double: %.20Lf\n", var3); //if it's not work on your pc don't panic , it's may be system problem


printf("%d\n",sizeof(float));

printf("%d\n",sizeof(double));

printf("%d\n",sizeof(long double));

Float -> 4 bytes = 32 bits

Double -> 8 bytes = 64 bits

Long Double -> 16 bytes = 128 bits

//Size of these data types totally depends from system to system.

int var = 4/9;
printf("%d\n", var);

float var1 = 4/9;
printf("%f\n", var1);

float var2 = 4.0/9.0;
printf("%f\n", var2);


return 0 ;

}
   
