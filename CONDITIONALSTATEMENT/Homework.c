#include<stdio.h>
int main(){

  int x;
  printf("enter the number:");
  scanf("%d",&x);
  
    (x%400==0) ? printf("leap year") : printf("not leap year");  

  return 0;


}