//Q15.Write an algorithm to create a program to compute the area of a circle. Derive your formula from the given equation: A=πr², then display the output.

#include <stdio.h>
int main(){
    float pi=3.1416,area,r;
    printf("enter the radius :");
    scanf("%f",&r);
    area=pi*r*r;
    printf("Area of circle is :%f",area);
    return 0;
}