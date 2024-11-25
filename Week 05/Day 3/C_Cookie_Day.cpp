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

        int mincooki = INT_MAX;

        for(int i=0; i<n; i++){
        
            int x;
            cin>>x;

            if(x >= k){
                mincooki = min(mincooki, (x%k));

            }
        
        }

        if(mincooki != INT_MAX)cout<<mincooki<<endl;
        else cout<<-1<<endl;
    
    }


    return 0;
}