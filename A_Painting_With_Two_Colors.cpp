#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ; 
    for( int i =0 ; i < t ; i++){
        long long n,a ,b ; 
        cin >> n >> a >> b ;
        if( a==b){
            cout << "YES" << endl ; 
        }else{

            if( n%2 == 1 && a%2 == 1 && b%2 == 1){
                cout << "YES" << endl ; 
            }else if(n%2 == 1 && a%2 == 0 && b%2 == 1){
                if(a>b){
                    cout << "NO"<< endl ; 
                }else{
                    cout << "YES" << endl ; 
                }
            }else if(n%2 == 1 && a%2 == 1 && b%2 == 0){
                if(a>b && a+b <=n){
                    cout << "YES" << endl ; 
                }else{
                    cout << "NO" << endl ; 
                }
            }else if(n%2 == 1 && a%2 == 0 && b%2 == 0){
                cout << "NO" << endl ; 
            }else if(n%2 == 0 && a%2 == 0 && b%2 == 1){
                if(a>b){
                    cout << "NO"<< endl ; 
                }else{
                    cout << "YES" << endl ; 
                }
            }else if(n%2 == 0 && a%2 == 1 && b%2 == 0){
                if(a>b && a+b <=n){
                    cout << "NO" << endl ; 
                }else{
                    cout << "YES" << endl ; 
                }
            }else if(n%2 == 0 && a%2 == 0 && b%2 == 0){
                cout << "NO" << endl ; 
            }else if(n%2 == 0 && a%2 == 1 && b%2 == 1){
                cout << "NO" << endl ; 
            }
        }

    }
}