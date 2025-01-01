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

        string s;
        cin>>s;

        int zero = 0, ones = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                zero++;
            }
            else
                ones++;
        
        }


        if(n==zero)
            cout<<zero<<endl;
        else if(n==ones)

            cout<<ones<<endl;
        else
            cout<<1<<endl;
    
    }


    return 0;
}