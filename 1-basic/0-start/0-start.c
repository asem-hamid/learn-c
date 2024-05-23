# include <stdio.h>

/*this is my first programme*/
int main() {
   int age = 20 ; // int datatype
   float hight = 5.5; // float datatype
   char email = '@'; // char datatype

    printf("hello world\n");       // printf function to print any thing
    printf("My name is Asem\n");   // '  \n  '  for next line
    printf("my age is %d\n",age);
    printf("my hight is %f\n",hight);
    printf("Sign use in email is %c\n",email);
   
   int age2 ;
    printf("What is your age?\n");
    scanf("%d",&age2);    // scanf function to take input from user 
    printf("P2: my age is %d\n",age2); 
    printf("nice . give me 2 numbers \n"); 

   int a , b;
    
    
    printf("enter a\n");  
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    int sum = a + b ; 
  
    printf("this is the sum of a + b is  %d\n",sum); 



 printf("Hello World!\nI am learning C.\nAnd it is awesome!\n");

 printf("Hello World!\n\n"); 
 printf("I am learning C.\n");

 printf("Hello World!\t"); 
 printf("I am learning C.\n");

 printf("Hello World!\\");
 printf("I am learning C.\n");

 printf("Hello World!\"");
 printf("I am learning C.\n");


  return 0 ;

}
