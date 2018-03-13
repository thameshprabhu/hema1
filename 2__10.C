#include<stdio.h>
#include<string.h>
int main()
{
char str[10],*str1[10];
int i,l;
printf("enter the string");
scanf("%[^\n]s",&str);
l=strlen(str);
for(i=0;i<l;i++)
{
  if(str[i]=='y')
{
  str[i]='a';
  printf("%c",str[i]);
}
else if(str[i]=='Y')
{
  str[i]='A';
  printf("%c",str[i]);
}
else if(str[i]=='X')
{
  str[i]='B';
  printf("%c",str[i]);
}
else if(str[i]=='x')
{
  str[i]='b';
  printf("%c",str[i]);
}
else if(str[i]=='z')
{
  str[i]='c';
  printf("z");
}
else if(str[i]=='Z')
{
  str[i]='C';
  printf("%c",str[i]);
}
else
{
  str[i]=str[i]+3;
  printf("%c",str[i]);
}
}
return 0;
}
