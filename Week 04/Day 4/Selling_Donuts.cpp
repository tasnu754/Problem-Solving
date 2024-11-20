#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int n, m;
        cin>>n>>m;

        vector<int> v(n+1);

        for(int i=1; i<=n; i++){
        
            cin>>v[i];
        
        }

        int sd = 0;

        for(int i=0; i<m; i++){
        
            int idx;
            cin>>idx;

            if(v[idx] == 0)
                sd++;
            else
                v[idx]--;
        
        }

        cout<<sd<<endl;
    
    }


    return 0;
}