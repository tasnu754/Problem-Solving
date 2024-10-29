#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    while(t--){
        int x;
        cin>>x;

        int ans = (100-x) / 10;
        cout<<ans*10<<endl;
    }

    return 0;
}