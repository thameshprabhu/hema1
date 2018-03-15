#include<stdio.h>
int main()
{
  int a[20],n,count=0,i,k,flag=0;
  printf("enter the number of element");
  scanf("%d",&n);
  printf("enter the array");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the element to be search");
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    if(a[i]==k)
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
