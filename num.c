#include<stdio.h>
int main()
{
  char str[20];
  int i,count=0,flag;
  printf("enter the string");
  scanf("%s",&str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>=97&&str[i]<=122||str[i]>=65&&str[i]<=90)
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
    printf("no");
  }
  else
  {
    printf("yes");
  }
  return 0;
}
