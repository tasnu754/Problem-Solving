#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int n, k;
        cin>>n>>k;

        if((n*10) <= k && (n*12) >= k){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    
    }


    return 0;
}