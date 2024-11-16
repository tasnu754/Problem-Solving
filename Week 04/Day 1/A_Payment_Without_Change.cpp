#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        long long a, b, n, s;
        cin>>a>>b>>n>>s;

        cout<<((s - (s < a*n ? s/n*n : a*n) > b) ? "NO" : "YES")<<endl;
    
    }


    return 0;
}