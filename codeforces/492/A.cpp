#include<iostream>
using namespace std;

int main(){
    int cube , h , i , j , sum ;
    cin >> cube ;
    for(i = 1, sum = 0 , j = 0; ; i++ ){
        sum += (i * (i + 1 )) / 2 ;
        if(sum > cube) break ;
        else j++ ;
       
    }
    cout << j ;
}