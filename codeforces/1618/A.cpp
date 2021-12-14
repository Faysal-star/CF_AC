#include<stdio.h>
int main()
{
	int t,arr[7],tarr[3],a,i;
	scanf("%d",&t);
	while(t--){
	
	a=7;
	i=1;
	while(a--){
		scanf("%d",&arr[i]);
		i++;
	}
	tarr[1]=arr[7]-arr[6];
	tarr[2]=arr[7]-arr[5];
	tarr[3]=arr[7]-arr[4];
	if(tarr[1]+tarr[2]+tarr[3]!=arr[7]){
		tarr[3]=arr[4];
		
	}
	printf("%d %d %d\n",tarr[3],tarr[2],tarr[1]);
	
}
}
