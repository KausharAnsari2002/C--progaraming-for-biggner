 #include<stdio.h>
      int power(int a, int b){
        if(b==0) return 1;
        return a*power (a,b-1);
      }
 int main(){
  int a;
  printf("enter the power":);
  scanf("%d",&a);

   int a;
  printf("enter the power":);
  scanf("%d",&a);
  int pow = power(a,b);
  printf("%d ",pow);

 return 0;
}