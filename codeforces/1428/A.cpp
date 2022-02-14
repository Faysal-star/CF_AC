#include<stdio.h>
#include<math.h>
int main(){
	int t,x1,y1,x2,y2,r;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
		if(x1 == x2 && y1 == y2){
			r = 0 ;
		}
		else if(x1 == x2 && y1 != y2){
			r= abs(y2 - y1);
		}
		else if(y1 == y2 && x1 != x2){
			r = abs(x2 - x1);
		}
		else {
			r = abs(x2-x1) + abs(y2 - y1) + 2 ;
		}
		
		printf("%d\n",r);
	}
}
