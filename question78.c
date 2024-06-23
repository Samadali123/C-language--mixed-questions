#include<stdio.h>

int main(){
    int arr[] = {4,2,1,5};
    int count = sizeof(arr)/sizeof(int);
    int target = 7;
    int check1 = 0;
    int check2 = 0;
    
    for(int i=0; i<count; i++){
        for(int j=i+1; j<count; j++){
            if(arr[i]+arr[j] == target){
                check1 = i;
                check2 = j;
                break;
            }
        }
    }
     if(check1 == 0  && check2 == 0){
        printf("not find");
     }
     else{
        printf("indices of a target number is %i %i" ,check1,check2);
     }
    return 0;
}