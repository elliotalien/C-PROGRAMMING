//Write an algorithm to create a program to compute the volume of a sphere. Use the formula: V = (4/3) *pi*r3 where pi is equal to 3.1416 approximately. The r is the radius of sphere. Display the result.

#include <stdio.h>
int main (){
    float v,r;
    float pi=3.1416;
    printf("enter the radius :");
    scanf("%f",&r);
    v=(4/3)*pi*r*r*r;
    printf("volume of sphere is : %f",v);
    return 0;
}