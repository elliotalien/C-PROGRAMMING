//Write an algorithm to print all odd numbers from 1-100


#include <stdio.h>
int main (){
    int i,odd;
    printf("odd numbers are :");
    for(i=1;i<100;i++){
        odd=i%2;
        if(odd==1){
            printf("%d",i);
        }
            else    
                printf(",");
    }
    return 0;
}
