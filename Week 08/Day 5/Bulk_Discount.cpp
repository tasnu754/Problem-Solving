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

        vector<long long> v(n);

        for(int i=0; i<n; i++){
        
            cin>>v[i];
        
        }

        sort(v.begin(), v.end());

        long long ans = 0;

        for(int i=0; i<n; i++){
            int val = v[i];

            ans += max(0 , val-i);
        
        
        }

        cout<<ans<<endl;
    
    }


    return 0;
}