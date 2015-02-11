//try to find values for small numbers e.g from 1 to 20 and try to find the sequence
#include<iostream>
#include<vector>
#include<cstdio>
#define ll long long int
using namespace std;
ll work(ll a)
{
if(a==0)return 0;
if(a==1)return 1;
if(a%2==0)return (2*work(a/2)+a/2);
else return (2*work(a/2)+(a/2+1));
}
int main()
{
ll a, b;
scanf("%lld %lld",&a,&b);
ll ans=work(b)-work(a-1);
printf("%lld",ans);
return 0;}

