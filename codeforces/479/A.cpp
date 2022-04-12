#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b, c, s1 , s2 ,s3 , s4;
    cin >> a >> b >> c ;
    s1 = a + b + c ;
    s2 = (a+b)*c ;
    s3 = a*b*c ;
    s4 = a*(b+c) ;
    cout << max({s1 , s2 , s3 ,s4});
}