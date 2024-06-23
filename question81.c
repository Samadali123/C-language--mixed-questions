#include<stdio.h>

int main(){
    int n;
    printf("enter a number");
    scanf("%i",&n);

    for(int i=1; i<=n; i++){
        if(i%5 == 0 ||  i%7 == 0){
            printf("%i ",i);
        }
    }
    return 0;
}