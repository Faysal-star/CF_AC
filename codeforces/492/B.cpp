#include<bits/stdc++.h>
using namespace std;
int main(){
    // ios_base::sync_with_stdio(false);  
    // cin.tie(NULL);
    long long int n , l ;
    cin>> n >> l ;
    int a[n+1] ;
    double max=0 , nmax;
    for(int i = 0 ; i < n ; i++) cin >> a[i] ;
    
    sort(a , a+n);
    a[n] = a[n-1] ;

    //  for(int i = 0 ; i < n ; i++) cout << a[i] << " " ;
    if(n == 1) {
        max = ((l-a[0] > a[0])) ? 2*(l-a[0]) : 2*a[0];
    }

    else {
        for(int i = 0 ; i < n ; i++){
            if(i == 0 && a[i] != 0){
                nmax = 2*a[i] ;
            }
            else if(i == n-1 && a[n-1] != l){
                nmax = 2*(l-a[i]);
            }
            else {
            nmax = a[i+1] - a[i] ;
            }

            max = (max > nmax) ? max : nmax ;
        }
    }
   

    printf("%.10lf" , max/2.0);
    
}