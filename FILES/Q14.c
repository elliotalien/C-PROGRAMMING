//Q14.Write an algorithm to design a program to find the circumference of a circle. Use the formula: C=2πr, where π is approximately equivalent 3.1416.

#include <stdio.h>
int main(){
    float pi=3.1416,n,c;
    printf("enter a value :");
    scanf("%f",&n);
    c=2*pi*n;
    printf("%f",c);
    return 0;
}