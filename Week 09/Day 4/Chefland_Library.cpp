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

        map<int, vector<int>> mp;

        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
        
            mp[x].push_back(i);
        
        }

        int ans = 0;

        for(auto it=mp.begin(); it!=mp.end(); it++){
           int sz = it->second.size();
           sz--;

           ans += it->second[sz];

        }

        cout<<ans<<endl;
    
    }


    return 0;
}