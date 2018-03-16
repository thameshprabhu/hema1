#include<stdio.h>
#include<math.h>
int main()
{
  int n,k,count=0,flag=0,i;
  printf("enter the value for n and k");
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
    if(pow(k,i)==n)
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
