#include<stdio.h>
void main() 
{
 int fact=1,n,i;
 scanf("%d",&n);
 if(n==0||n==1)
 printf("%d",1);
 else
 {
 for(i=0;i<n;i++)
 fact=fact*(n-i);
 printf("%d",fact);
 }
}
