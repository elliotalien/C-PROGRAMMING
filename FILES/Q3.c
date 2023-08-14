//Write an algorithm to find the largest number among three numbers

#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter num1 number :");
    scanf("%d",&num1);
    printf("enter num2 number :");
    scanf("%d",&num2);
    printf("enter num3 number :");
    scanf("%d",&num3);
    if(num1>=num2 && num1>=num3){
        printf("num1 is largest :%d",num1);
    }
    else if(num2>=num1 && num2>=num3){
        printf("num2 is largest :%d",num2);
    }
    else if(num3>=num1 && num3>=num2){
        printf("num3 is largest :%d",num3);
    }
    return 0;

}