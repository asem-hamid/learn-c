//only odd number 

# include <stdio.h>

int main(){

  
  for(int i = 5; i <= 50; i++){
    if (i % 2 ==0)
    {
      continue;
    }
    printf("%d\n",i);
  
  } 

   //another way

 //  for(int i = 5; i <= 50; i++){

 //    if (i % 2 !=0)
 //    {
 //      printf("%d\n",i);
 //    }
   
 //  }

return 0;
}
