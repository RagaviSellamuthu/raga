#include<stdio.h>
int main() 
{
 char str[100],rev[100];
 int i,j,k;
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
     k=i;
 }
 for(j=0;j<=i-1;j++)
 {
     rev[j]=str[k];
     k--;
 }
 printf("%s",rev);
}
