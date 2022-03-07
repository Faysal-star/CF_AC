#include<stdio.h>
#include<math.h>
int main(){
    int a , res;
    float i ;
    scanf("%d" , &a);
    i = a / 5.0 ;
    if(floor(i) != ceil(i)){
        i = i+1 ;
    }
    res = (int)i ;
    printf("%d" ,res);

}