#include<stdio.h>
int main()
{
	long long int n,sum,ans;
	scanf("%lld" , &n);
	sum = (n*(n+1))/2 ;
	ans = (sum%2 == 0) ? 0 : 1 ;
	printf("%lld",ans);
}
