#include<stdio.h>
#include<string.h>
int main()
{
  int n,count=0,j,i;
  char str[30][55],a[23];
  printf("enter the number of words to enter:");
  scanf("%d",&n);
  printf("enter the string:");
 for(i=0;i<n;i++)
 {
   scanf("%s",&str[i]);
 }
 
  for(j=0;j<n;j++)
  {
  for(i=0;i<n;i++)
  {
   if(strlen(str[i])>strlen(str[j]))
   {
     strcpy(a,str[i]);
     strcpy(str[i],str[j]);
     strcpy(str[j],a);
   }

  }
  }
for(i=0;i<n;i++)
{
  printf("%s ",str[i]);
  
}
return 0;
}
  
  
