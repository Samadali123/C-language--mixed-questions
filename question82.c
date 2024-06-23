#include<stdio.h>
#include<math.h>

int main(){

    int n;
    printf("enter a number");
    scanf("%i",&n);
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + pow(i,2);

    }
    printf("sum of n square numbers is %i",sum);
    
    return 0;
}