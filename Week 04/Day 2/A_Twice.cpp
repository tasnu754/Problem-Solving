#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int n;
        cin>>n;

        map<int,int> mp;

        for(int i=0; i<n; i++){
        
            int x;
            cin>>x;

            mp[x]++;
        
        }

        int a = 0;

        for(auto it: mp){
            a += (it.second / 2);
        }

        cout<<a<<endl;


    
    }


    return 0;
}