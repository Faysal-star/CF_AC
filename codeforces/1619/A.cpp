#include<stdio.h>
#include<string.h>
int main()
{
	int len , blen , t ,c;
	char text[100];
	scanf("%d",&t);
	
	while(t--){
	
	scanf("%s",text);
	
	len = strlen(text);
	
	
	if(len%2!=0){
		printf("NO\n");
	}
	else
	{
		blen = len / 2 ;
		c=0;
		while(blen<len){
			
			
			if(text[c]!=text[blen]){
				break;
			}
			blen++;
			c++;
		}
		
	if(blen==len){printf("YES\n");}
	else{printf("NO\n");}
	
    }
    

}
	
	
	
	
}
