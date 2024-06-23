#include<stdio.h>

int main(){
    int arr1[] = {21,12,3,4};
    int arr2[] = {15,6,72,8};

    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    int size3 = size1+size2;
    int arr3[size1+size2];

    int progress  = 0;
    for(int i=0; i<size1; i++){
        arr3[progress] = arr1[i];
        progress++;
    }

    for(int j=0; j<size2; j++){
        arr3[progress] = arr2[j];
        progress++;
    }

    
    for(int n=0; n<size3-1; n++){
        for(int m=0; m<size3; m++){
        if(arr3[m]>arr3[m+1]){
            int temp = arr3[m];
            arr3[m] = arr3[m+1];
            arr3[m+1] = temp;
        }
    }
    }


    int start = 0;
    int end = size3-1;
    int middle = (start+end)/2;


   printf("mereged array :");
       for(int l=0; l<size3; l++){
        printf("%i ",arr3[l]);
    }
   
    printf("\nmedian of merged array is %i ",arr3[middle]);



    return 0;
}