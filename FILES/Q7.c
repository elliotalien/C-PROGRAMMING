//Write an algorithm to print all the prime numbers from 1 to 100


#include <stdio.h>
int main(){
 int n,count,i;
 for(n=1;n<=100;n++){
   count=0;
   for(i=1;i<=n;i++){
      if(n%i==0){
         count++;
      }
   }
       if(count==2){
         printf("%d ",n);
      }
   }
 return 0;
}