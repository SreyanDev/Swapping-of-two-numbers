#include<stdio.h>

void swap(int *x,int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
}

int main()
{
  int a,b;

  printf("Enter two numbers:\n");
  scanf("%d%d",&a,&b);

  swap(&a,&b);

  printf("After swapping\nX:%d\nY:%d",a,b);

  return 0;
}
