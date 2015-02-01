#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void add(char *one,char *zero)
{
int c=0,s,i,l=strlen(one),ll=strlen(zero);
for(i=0;i<ll;i++)
{
   s=c+one[i]-48+zero[i]-48;
   c=s/10;
   one[i]=s%10+48;
}
for(;i<l;i++)
{
   s=c+one[i]-48;
   c=s/10;
   one[i]=s%10+48;
}
if(c!=0)
one[i]=c+48;
}

int main()
{
int n;
scanf("%d",&n);
char zero[10000],one[10000],t[10000];
int i;
zero[0]='1';one[0]='1';
for(i=2;i<=n;i++)
{
strcpy(t,zero);
strcpy(zero,one);
add(one,t);
//printf("%d %s\n",i,one);
}
add(one,zero);
int l=strlen(one);
for(i=l-1;i>=0;i--)
  printf("%c",one[i]);
printf("\n");

return 0;}
