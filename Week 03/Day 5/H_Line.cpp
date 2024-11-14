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

        long long val = 0;

        vector<char> v(n);
        vector<long long> v2;

        for(int i=0; i<n; i++){
        
            cin>>v[i];

            if(v[i]=='L'){
                val += i;
            }
            else{
                val += (n-1-i);
            }
        
        }

        int mid = n/2;

        for(int i=0; i<n; i++){
        
            if(v[i]=='L' && i<mid){
                v2.push_back(n-i-1-i);
            }
            else if(v[i]=='R' && i>=mid){
                v2.push_back(i-(n-i-1));
            }
        
        }

        sort(v2.begin(), v2.end(), greater<>());

        int vsz = v2.size();

        for(int i=0; i<vsz; i++){

            val += v2[i];
            cout<<val<<" ";
        
        }

        if(v2.size() < n){

            int sz = n - v2.size();

            for(int i=0; i<sz; i++){
                cout<<val<<" ";
            }
        }
        cout<<endl;

    }


    return 0;
}