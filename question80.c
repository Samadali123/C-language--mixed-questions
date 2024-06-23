#include<stdio.h>

int main(){
    int occ[] = {0,0,0,0,0,0,0,0,0,0};
    int arr[] = {1,2,1,1,1,4,4,5,6,7};
    int count = sizeof(arr)/sizeof(int);
    
    for(int i=0; i<count; i++){
        if(occ[arr[i]] == 0){
            occ[arr[i]]++;
        }
    }

    for(int i=0; i<10; i++){
        if(occ[i]>0){
            printf("%i ",i);
        }
    }
    return 0;
}