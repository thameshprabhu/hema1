#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[30];
int i,j=0,count=0,flag=0,n;
printf("\nEnter 2 strings:");
scanf("%s%s",s1,s2);
n=strlen(s1);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
if(s1[i]==s2[j])
{
count++;
i++;
}

else
{
  flag++;
}
}
}
if(flag==1)
{
  printf("yes");
  
}
else
{
  printf("no");
}
return 0;
}
