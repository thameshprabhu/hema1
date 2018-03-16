#include<stdio.h>
#include<math.h>
int main();
{
  int n,i,count=0,flag=0;
  printf("enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    if(pow(2,i)==n)
    {
      count++;
    }
    else
    {
      flag=0;
    }
  }
  if(count>0)
  {
    
    printf("yes");
  }
  else
  {
    printf("no");
  }
return 0;
}
