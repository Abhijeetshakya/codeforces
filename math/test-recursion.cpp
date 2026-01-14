#include <bits/stdc++.h>
using namespace std ; 


void print(int i , vector<int> &ans , int arr[] , int n){
    if(i == n){
        for(auto x : ans){
            cout << x << " " ; 
        }
        cout << "\n" ; 
        return ; 
    }
    // include the element 
    ans.push_back(arr[i]) ; 
    print(i+1,ans,arr,n) ; 

    ans.pop_back() ;    
    // exclude the element 
    print(i+1,ans,arr,n) ; 
    if(i == 0){
        cout << "{}\n" ;
    }
}

int main(){
    int arr[] = {1,2,3} ; 
    int n = 3 ; 
    vector<int> ans ; 
    print(0 , ans , arr,n) ; 
    return 0 ; 
}