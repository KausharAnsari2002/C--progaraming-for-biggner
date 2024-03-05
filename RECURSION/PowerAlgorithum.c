#include<stdio.h>
 int powerlog(int a int b ){
    if(b==1) return a;
    if(b%==2) {           // for even number
        return  powerlog(a,b/2) * perror(a,b/2);
    }
    else{
        return  powerlog(a,b/2) * perror(a,b/2) * a;
    }
 }
int main(){
    int a;
    printf("enter the base:");
    scanf("%d",&a);
  
    int b;
    printf("enter the power:");
    scanf("%d",&b);
     int p= powerlog(a,b);
     printf("%draised to the  power  %d is %d", a,b,p);



     return 0;
  
}