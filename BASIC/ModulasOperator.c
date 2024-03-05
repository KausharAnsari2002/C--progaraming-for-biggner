#include<stdio.h>
int main (){

  int x = 5;
    printf("enter the first number:");
    scanf("%d",&x);

  int b = 2;
   printf("enter the second number:");
    scanf("%d",&b);
    int divide = x%b;
      printf(" value of modulas operator:%d",divide);

  return 0;
}