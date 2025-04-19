#include <stdio.h>
 
int main() {
    int n =12;
    int arr[]={1,2,4,3,0,2,1,7,1,4,3,0}; // Q array  
    int count[8] = {0}; // count array 
    int output[n]; // ans array

    for(int i =0;i < n;i++){  // kon element koyta ase ta count kore , count array er toto number index e rakha
        count[arr[i]]++;
    }

    
    for(int i =0;i < 8 - 1;i++){ // 0 index + 1 index kore = 1 index e rakhbo , 1 index + 2 index kore = 2 index e rakhbo  
        count[i + 1] += count[i];
    }

    for(int i = n - 1; i >= 0;i--){

        count[arr[i]]--;
        output[count[arr[i]]] = arr[i];

    }    
    for(int i =0;i < n;i++){
        printf("%d\n",output[i]);
    }
    
 
return 0;
}
 
