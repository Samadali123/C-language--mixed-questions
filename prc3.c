#include<stdio.h>
#include<math.h>

int main(){
    int start,end;
    printf("start or end batao ");
    scanf("%i %i",&start,&end);

    for(int i=start; i<=end; i++){
          int n=i;
    int copy = n;
    int digitscount = 0;
    while(copy>0){
        digitscount++;
        copy = copy/10;
    }

    int copy1 = n;
    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum = sum + pow(rem,digitscount);
        digitscount--;
        n=n/10;
    }

    if(sum == copy1){
        printf("%i ",sum);
    }
    }
  
    
    return 0;
}