//Write an algorithm to print all numbers from 1-1000 in the reverse order. ie . 1000, 999, 998...


#include <stdio.h>
int main (){
    int i,n;
    printf("enter a number :");
    scanf("%d",&n);
    printf("Result is :");
    for(i=n;i>=1;i--){
        printf("%d ",i);
    }
    return 0;
}