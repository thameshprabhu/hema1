#include<stdio.h>
int main()
{
  int n,i,k,count=0,flag=0;
  printf("enter the number");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
   if(n%i==0)
     count++;
  }
  if(count>0)
    printf("yes");
  else
    printf("no");
 return 0;
 }
