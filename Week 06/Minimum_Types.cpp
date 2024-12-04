#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        long long n, x;
        cin>>n>>x;

        vector<pair<long long , long long>> coins(n);

        for(int i=0; i<n; i++){
        
            cin>>coins[i].first;
        
        }
        for(int i=0; i<n; i++){
            cin>>coins[i].second;        
        }

        sort(coins.rbegin(), coins.rend());

        long long s = 0;
        int cn = 0;

        for(int i=0; i<n; i++){
        
            if(s >= x){
                break;
            }

            s += (coins[i].first * coins[i].second);
            cn++;       
        }

        if(s >= x)
            cout<<cn<<endl;
        else
            cout<<-1<<endl;
        
    
    }


    return 0;
}