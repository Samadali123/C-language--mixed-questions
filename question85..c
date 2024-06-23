#include<stdio.h>

int main(){
    int pronic = 380;
    int check = 1;
    for(int i=1; i<=pronic; i++){
        if(i*(i+1) == pronic){
            check = 0;
            break;
        }
    }
    if(check == 1){
        printf("not ");
    }
    else{
        printf("yes it is a pronic numbers !");
    }
    return 0;
}