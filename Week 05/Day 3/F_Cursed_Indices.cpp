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
        long long prefix = 0;
        int cnt = 0;

        sort(v.begin(), v.end());

        for(int i=1; i<n; i++){
        
            prefix += v[i-1];
            if(prefix >= v[i])
            cnt++;

        
        }

        cout<<cnt<<endl;
        for(int i=0; i<n; i++){
        
            cout<<v[i]<<" ";
        
        }

        cout<<endl;
    
    }


    return 0;
}