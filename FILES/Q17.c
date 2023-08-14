//Q17.Write an algorithm to calculate Simple Interest ( I = PRt/100, where I = interest, P = principal, R = rate, and t = time)

#include <stdio.h>
int main(){
    int p,r,i,t;
    printf("Enter principle amount :");
    scanf("%d",&p);
    printf("Enter rate of interest :");
    scanf("%d",&r);
    printf("Enter time in year :");
    scanf("%d",&t);

    i=p*r*t/100;

    printf("Result is :%d",i);

    return 0;
}