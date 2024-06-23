#include<stdio.h>
int main(){
    int arr[] = {11,23,34,1,5,90,100,45,900,90};
    int count = sizeof(arr)/sizeof(int);

    int index;
    printf("enter an index value: ");
    scanf("%i", &index);

    for(int i=1; i<=count-index; i++){
     for(int j=0; j<index; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
     }
    }


    for(int i=1; i<=count-index; i++){
        for(int j=index+1; j<count; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for(int s = 0; s<count; s++){
        printf("%i  ", arr[s]);
    }
    return 0;
}
