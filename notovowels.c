#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];
  int len,i;
  printf("enter the string");
  scanf("%s",&str);
  len=strlen(str);
  for(i=len-1;i>=0;i--)
  {
    if(str[i]!='a'&&str[i]!='A'&&str[i]!='e'&&str[i]!='E'&&str[i]!='i'&&str[i]!='I'&&str[i]!='o'&&str[i]!='O'&&str[i]!='u'&&str[i]!='U')
    {
      printf("%c",str[i]);
    }
  }
  return 0;
}
