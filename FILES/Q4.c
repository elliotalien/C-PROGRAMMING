//Write an algorithm to find and display sum of first n numbers

#include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum of first n numbers :%d",sum);
}