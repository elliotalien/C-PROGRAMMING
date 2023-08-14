//Q13.Write an algorithm to create a program that exchanges the value of two variables: x and y. The output must be: the value of variable y will become the value of variable x, and vice versa.


#include <stdio.h>
int main(){
 int x,y,temp=0;
 printf("Enter a number for X : ");
 scanf("%d",&x);
  printf("\n");

 printf("Enter a number for Y :");
 scanf("%d",&y);
  printf("\n\n");
 printf("Before X and Y values :\n");
 printf("X is %d",x);
 printf("\n");
 printf("Y is %d",y);
 printf("\n\n");

temp=x;
x=y;
y=temp;
 printf("after X and Y values :\n");
 printf("X is %d",x);
 printf("\n\n");
 printf("Y is %d",y);

 return 0;
}