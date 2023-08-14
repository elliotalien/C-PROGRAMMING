//Q16.Write an algorithm to check whether a triangle is possible or not based on the three angles given.


#include <stdio.h>
int main(){
    int a1,a2,a3,sum;
    printf("Enter Angle1 value :");
    scanf("%d",&a1);
     printf("Enter Angle2 value :");
    scanf("%d",&a2);
     printf("Enter Angle3 value :");
    scanf("%d",&a3);

    sum=a1+a2+a3;

    if(sum==180){
        printf("Triangle is possible");
    }
    else{
        printf("Triangle is  note possible");
    }
    return 0;
}