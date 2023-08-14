//Write an algorithm to find the factorial of a number entered by the user

#include <stdio.h>
int main(){
    int i,sum=1,n;
    printf("enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("factorial is :%d",sum);
    return 0;
}
