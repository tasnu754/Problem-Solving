#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        string s;
        cin>>s;

        int sz = s.size();

        string x;

        for(int i=0; i<sz-2; i++){
        
            x += s[i];
        
        }

        x += 'i';

        cout<<x<<endl;
    
    }


    return 0;
}