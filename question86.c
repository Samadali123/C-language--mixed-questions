#include<stdio.h>

int main(){
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            if(i == 5){
            printf("* ");
            }
        }

        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}