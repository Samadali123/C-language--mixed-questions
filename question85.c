#include<stdio.h>

int main(){
    int pronic = 90;
    int progress = 0;
    int counter = 1;
    int check = 0;
      
    for(int i=1; i<=pronic/2; i++){
        if(progress == pronic){
            check = 1;
            break;
        }
        progress = progress + 2*counter;
        counter++;
    }

    if(progress == pronic){
        printf("%i ",progress);

    }
   
    return 0;
}