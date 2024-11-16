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

        string ans = "";

        for(int i=n-1; i>=0; i--){
        
            if(s[i] != '0'){
                ans += char( 'a' + (s[i] - '1'));
            }
            else{
                int num = (s[i-2] - '0') * 10 + (s[i-1] - '0');

                ans += char('a' + (num - 1));
                i -= 2;
            }
        
        }

        reverse(ans.begin() , ans.end());


        cout<<ans<<endl;
    
    }


    return 0;
}