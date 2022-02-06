#include <stdio.h>

int main() {
    int n,tn,k,count=0,i=0,sc[50] ;
    scanf("%d %d",&n,&k);
    tn = n;
    while(n--){
        i++;
        scanf("%d",&sc[i]);
        
        
    }
    while(tn--){
        if(sc[k]<=sc[i] && sc[i] > 0){
            count++;
        }
        i--;
    }
    
    printf("%d\n",count);
    
    return 0;
}
