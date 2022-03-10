#include<stdio.h>
#include<math.h>
int main(){
	long int t , n ,sq;
	scanf("%ld", &t);
	while(t--){
		scanf("%ld",&n);
		sq = pow(2,n);
		printf("%ld\n",sq-1);	
	}
	return 0;
}
