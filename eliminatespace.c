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
      for(j=i+1;str[j]!='\0';j++)
      {
        str[j]=str[i+1];
        i++;
        printf("%c",str[j]);
      }
    }
    else
    {
      printf("%c",str[i]);
      
    }
  }
  return 0;
}
  
