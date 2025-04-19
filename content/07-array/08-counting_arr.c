#include <stdio.h>
 
int main() {
    int t,  n;
    scanf("%d", &t);
 
    while(t--){
        int r = -1;
        int my[200001]={0};
        scanf("%d", &n);
 
        for(int i =0; i<n; i++){
             int x;
             scanf("%d",&x);
             my[x]++;

             if(my[x] == 3){
                r = x;
             }         
        }
        printf ("%d\n",r);
    }
    
 
return 0;
}
 
