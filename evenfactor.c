#include<stdio.h>
int main()
{
  int n,i,k;
  printf("enter the number");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
   if(n%i==0)
   {
     k=n/i;
   if(k%2==0)
   {
     printf("%d ",k);
   }
   }
   n=n;
  }
 return 0;
 }
