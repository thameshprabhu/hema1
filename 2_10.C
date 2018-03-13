#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
int i,l;
printf("enter the string");
scanf("%[^\n]s",&str);
l=strlen(str);
for(i=0;i<l;i++)
{
  str[i]=str[i]+3;
  printf("%c",str[i]);
}
RETURN 0;
}
