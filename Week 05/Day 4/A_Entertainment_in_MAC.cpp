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

        if(s[0] <= s[s.size()-1]){
            cout<<s<<endl;
        }
        else{
            string ans = s;
            reverse(s.begin(), s.end());
            s += ans;
            cout<<s<<endl;
        }
    
    }


    return 0;
}