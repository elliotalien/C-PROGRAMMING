//Write an algorithm to print the fibonacci series till 1000            

#include <stdio.h>
int main(){
 int i,f0=0,f1=1,fn,n=5;
 for(i=1;i<=n;i++){
   fn=f0+f1;
   f0=f1;
   f1=fn;
     printf("%d ,",f0);
 }

 return 0;
}