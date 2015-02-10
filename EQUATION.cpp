#include<stdio.h>
long long int comb(long long int);
int main()
{
long long int cases,a,b,c,n;
long long int ans;
scanf("%lld",&cases);
while(cases--)
{
scanf("%lld%lld%lld%lld",&n,&a,&b,&c);
ans = comb(n)-comb(n-a-1)-comb(n-b-1)-comb(n-c-1)+comb(n-a-b-2)+comb(n-a-c-2)+comb(n-b-c-2)-comb(n-a-b-c-3);
printf("%lld\n",ans);
}
return 0;
}
long long int comb(long long int n)
{
if(n<0)
return 0;
long long int ans = ((n+1)*(n+2)*(n+3));
// combination n+r-1 C r... here r=3;
ans /= 6;
return ans;
}
