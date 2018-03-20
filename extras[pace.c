#include<stdio.h>
#include<string.h>
int main()
{
  int n,count=0,j,i;
  char str[30];
  printf("enter the string");
  scanf("%[^\n]s",&str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==' ')
    {
      count++;
    }
  }
  for(i=0;str[i]!='\0';i++)
  {
    if(count>1)
  {
      for(j=i+count;str[i]!='\0';j++)
      {
        str[i]=str[i+count];
        i++;
        printf("%c",str[i]);
      }
    }
   else
    {
      printf("%c",str[i]);
      
    }
}
  return 0;
}
  
