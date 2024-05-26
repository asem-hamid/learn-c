#include <stdio.h>

int main (){
 
 int no = 1 ;
 int n ;

  printf("Enter the row number :");
  scanf("%d",&n);
  
  printf("Pattern no %d \n",no++); //1
  for (int row = 1;row <=n; row++ ){
   
   for(int col = 1;col <=row;col++){
    printf("%d ", col);
   }
   printf(" \n" );
  
  }
  
  printf("Pattern no %d \n", no++); //2
  for (int row = 1;row <=n; row++ ){
   
   for(int col = 1;col <=row;col++){
    printf("%d ", row);
   }
   printf(" \n" );
  
  }
  
  printf("Pattern no %d \n", no++); //3
  for (int row = 1;row <=n; row++ ){
   
   for(int col = 1;col <=row;col++){
    
    printf("%d ", col % 2);
    
   }
   printf(" \n" );

  }
  
  printf("Pattern no %d \n", no++); //4
  for (int row = 1;row <=n; row++ ){
   
   for(int col = 1;col <=row;col++){
    
    printf("%d ", row % 2);
    
   }
   printf(" \n" );

  }
  
  printf("Pattern no %d \n", no++); //5
  for (char row = 'a';row <='e'; row++ ){
   
   for(char col = 'a';col <=row;col++){
    
    printf("%c ", col);
    
   }
   printf(" \n" );

  }
  
  printf("Pattern no %d \n", no++); //6
  for (char row = 'a';row <='e'; row++ ){
   
   for(char col = 'a';col <=row;col++){
    
    printf("%c ", row);
    
   }
   printf(" \n" );

  }
  
  printf("Pattern no %d \n", no++); //7
  for (int row = 1;row <=n; row++ ){
   
   for(int col = 1;col <=row;col++){
    
    printf("* ");
    
   }
   printf(" \n" );

  }
    
  printf("Pattern no %d \n",no++); //8
  for (int row = n;row >=1; row--){
   
   for(int col = 1;col <=row;col++){
    printf("%d ", col);
   }
   printf(" \n" );
  
  }
    
  printf("Pattern no %d \n",no++); //9
  for (int row = n;row >=1; row--){
   
   for(int col = n;col >=row;col--){
    printf("%d ", col);
   }
   printf(" \n" );
  
  }
    
  printf("Pattern no %d \n",no++); //10
  for (int row = n;row >=1; row--){
   
   for(int col = 1;col <=row;col++){
    printf("%d ", row);
   }
   printf(" \n" );
  
  }

  printf("Pattern no %d \n",no++); //11
  for (int row = n; row >= 1; row--) {
        
   for (int col = n; col >= row; col--) {
    printf("%d ", col);
   }
   printf("\n");
  }
  for (int row = 2; row <= n; row++) {

   for (int col = n; col >= row; col--) {
    printf("%d ", col);
   }

   printf("\n");

  }

  printf("Pattern no %d \n",no++); //12
  for (int row = 1;row <= n;row++){

   for(int col = 1;col <= row;col++){
    printf("%d ", col); 
   }  

   printf("\n");

  }
  for (int row = n;row >= 1;row--){

   for(int col = 1;col <= row - 1 ;col++){
    printf("%d ", col); 
   }  
   
   printf("\n");

  }

  printf("Pattern no %d \n",no++); //13
  for (int row = 1;row <= n;row++ ){
  
   for (int col = 1;col <= n - row;col++){

      printf(" ");

   }
   for (int col = 1;col <=row;col++){

      printf("%d",col);

   }

   printf("\n");

  }

  printf("Pattern no %d \n",no++); //14
  for (int row = 1;row <= n;row++ ){
  
   for (int col = 1;col <= n - row;col++){

      printf(" ");

   }
   for (int col = 1;col <=row;col++){

      printf("%d",row);
 
   }

  printf("\n");

  }

  printf("Pattern no %d \n",no++); //15
  for (int row = n;row >= 1;row-- ){
  
   for (int col = 1;col <= n - row;col++){

      printf(" ");

   }
   for (int col = 1;col <=row;col++){

      printf("%d",col);

   }

   printf("\n");

  }

  printf("Pattern no %d \n",no++); //16
  for (int row = n;row >= 1;row-- ){
  
   for (int col = 1;col <= n - row;col++){

      printf(" ");

   }
   for (int col = 1;col <=row;col++){

      printf("%d",row);

   }

   printf("\n");

  }

  printf("Pattern no %d \n",no++); //17
  for(int row = 1;row <= n;row++){

   for(int col = 1;col <= n - row;col++){

    printf(" ");

   }
   for(int col = 1;col <= row;col++){

    printf("%d",col);

   }
 
   printf("\n");

  }

  for(int row = n - 1;row >= 1;row--){

   for(int col = 1;col <= n - row;col++){

      printf(" ");

   }
   for(int col = 1;col <= row;col++){

      printf("%d",col);

   }
   
   printf("\n");

  }

  printf("Pattern no %d \n",no++); //18
  for(int row = 1;row <= n;row++){

   for(int col = 1;col <= n;col++){

      printf("# ");

   }

   printf("\n");

  }

  printf("Pattern no %d \n",no++); //19
  for(int row = 1;row <= n;row++){

   for(int col = 1;col <= n;col++){

   printf("%d ",col);

   }

   printf("\n");

  }

  printf("Pattern no %d \n",no++); //20
  for(int row = 1;row <= n;row++){

   for(int col = 1;col <= n;col++){

      printf("%d ",row);

   }

   printf("\n");

  }

  printf("Pattern no %d \n",no++); //21
  for(int row = 1;row <= n;row++){

   for(int col = 1;col <= row;col++){

      printf("%d ",row * col);

   }

   printf("\n");

  }

  printf("Pattern no %d \n",no++); //22
  
  char inbox = 'A';
  for(int row = 1;row <= n;row++){

     for(int col = 1;col <= n;col++){

        if(row == 1 || row == n || col == 1 || col == n){

         printf("0 ");

        }
        else{

         printf("%c ",inbox++);
        }
     }

     printf("\n");

  }

  printf("Pattern no %d \n",no++); //23
  for(int row = 1;row <= n;row++){

   for(int col = 1;col <= n - row;col++){

      printf(" ");
   }
   for(int col = 1;col <= (2 * row) - 1;col++){
      
      if(col == 1 || col == (2 * row) - 1 || row == 3){
         
         printf("*");

      }
      else{

         printf(" ");

      }
   }

   printf("\n");

  }

  printf("Pattern no %d \n",no++); //24
  for(int row = 1;row <= n;row++){

   for(int col = 1;col <= n - row;col++){

      printf(" ");
   }
   for(int col = 1;col <= (2 * row) - 1;col++){

      printf("%d",col);
   }

   printf("\n");

  }

  printf("Pattern no %d \n",no++); //25
  for(int row = n;row >= 1;row--){
      
   for(int col = 1;col <= n - row;col++){

      printf(" ");

   }
   for(int col = 1;col <= (2 * row) - 1;col++){

      printf("%d",col);

   }


   printf("\n");

  }

  printf("Pattern no %d \n",no++); //26
  for(int row = 1;row <= n;row++){

   for(int col = 1;col <= n - row;col++){

      printf(" ");

   }
   for(int col = 1;col <= (2 * row) - 1;col++){

      printf("%d",col);

   }

   printf("\n");

  }
  for(int row = n - 1;row >= 1;row--){
      
   for(int col = 1;col <= n - row;col++){

      printf(" ");

   }
   for(int col = 1;col <= (2 * row) - 1;col++){

      printf("%d",col);

   }


   printf("\n");
 
  }

  printf("Pattern no %d \n",no++); //27
  for (int row = 1;row <= n; row++){
   
   for(int col = 1;col <= n;col++){

      if(row == 1||row == n||col == 1||col == n){

         printf("#");

      }
      else{

         printf(" ");

      }
   }
    
   printf("\n");

  }
 
  printf("Pattern no %d \n",no++); //28
  for (int row = 1;row <= n; row++){
   
   for(int col = 1;col <= row;col++){

      if(row == 1||row == n||col == 1||col == row){

         printf("#");

      }
      else{

         printf(" ");

      }
   }
    
   printf("\n");

  }
  
  printf("Pattern no %d \n",no++); //29
  for (int row = 1;row <= n; row++){
   
   for(int col = 1;col <= n;col++){

      if(row == col||row + col == n + 1){

         printf("#");

      }
      else{

         printf(" ");

      }

   }
    
   printf("\n");

  }

  printf("Pattern no %d \n",no++); //30
  for(int row = 1;row <= n;row++){

   for(int col = 1;col <= n - row;col++){

      printf(" ");

   }
   for(int col = 1;col <= row;col++){

      printf("%d",col);
   }
   for(int col = row - 1;col >= 1;col--){

      printf("%d",col);

   }

   printf("\n");

  }
  for(int row = n - 1;row >= 1;row--){
   for(int col = 1;col <= n - row;col++){

      printf(" ");
   }
   for(int col = 1;col <= row;col++){

      printf("%d",col);

   }
   for(int col = row - 1;col >= 1;col--){

      printf("%d",col);

   }

   printf("\n");

  }
  
return 0;
}
