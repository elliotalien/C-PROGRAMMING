//Write an algorithm to check whether a number entered by the user is prime or not


#include <stdio.h>
int main(){
 int  n,i,count = 0 ;
 printf("enter a number ");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
    if(n % i == 0){
      count ++;
    }
 }
 if (count==2){
   printf("you enterd number is prime");
 }
 else{
   printf("you enterd number is note prime");
 }
    return 0;
}