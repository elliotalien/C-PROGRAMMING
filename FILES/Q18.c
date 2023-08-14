//Q18.Write an algorithm to check whether a person can vote based on the age. (only persons above 18 years can vote)

#include <stdio.h>
int main(){
    int age;

    printf("enter your age :");
    scanf("%d",&age);

    if(age>=18){
        printf("You can vote!!!");
    }
    else{
         printf("You can't vote!!!");
    }
    return 0;
}