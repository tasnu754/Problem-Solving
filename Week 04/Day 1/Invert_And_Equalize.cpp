#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int n, cnt0 = 0, cnt1 = 0;
        cin>>n;

        string s;
        cin>>s;

        for(int i=0; i<n-1; i++){
        
            if(s[i] != s[i+1]){
                if(s[i] == '1')
                    cnt1++;
                else
                    cnt0++;
            }
        
        }
        if(s[n-1] == '1') cnt1++;
        else cnt0++;

        cout<<(cnt1 <= cnt0 ? cnt1 : cnt0)<<endl;
    
    }


    return 0;
}