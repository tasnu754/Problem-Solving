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
        bool isdupli = false;

        for(int i=0; i<sz-1; i++){
        
            if(s[i] == s[i+1]){
                isdupli = true;
                break;
            }
        
        }

        if(isdupli)
            cout<<1<<endl;
        else
            cout<<sz<<endl;
    
    }


    return 0;
}