#include<stdio.h>
int main()
{

    int t,t2, num[3],bnum[3],i,j,x,temp;
    scanf("%d",&t);
    t2=t;
    while(t2--){
        x=3;
        while(x){
            scanf("%d",&num[x]);   
            x--; 
        }

        for(i=1 ; i<= 3 ; i++){

            for(j=1 ; j< 3 ; j++){
                if(num[j+1]>num[j]){
                    temp=num[j];
                    num[j]=num[j+1];
                    num[j+1]=temp;
                }

            }
        }

        // printf("%d %d %d\n",num[1],num[2],num[3]);

        if(num[1]==num[2]+num[3]){printf("YES\n");}
        else if(num[1] == num[2] ){
            if(num[3]%2 == 0){printf("YES\n");}
            else{printf("NO\n");}
        }
        else if(num[2] == num[3] ){
            if(num[1]%2 == 0){printf("YES\n");}
            else{printf("NO\n");}
        }
        else{printf("NO\n");}
        




        

    }
}