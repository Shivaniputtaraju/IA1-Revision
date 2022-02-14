#include <stdio.h>
int input()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return 0;
}
int cmp(int a,int b,int c)
{
  if(a>b&&b>a)
  return a;
  else if(b>a&&b>c)
  return b;
  else
  return c;
}
void output(int a,int b,int c,int largest)
{
  printf("largest is %d",largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,&largest);
  return 0;
}
