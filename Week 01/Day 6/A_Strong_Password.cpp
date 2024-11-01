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

        int flag = 0;
        int sz = s.size();

        for(int i=1; i<sz; i++){
            if(s[i-1] == s[i]){
                char c; 
                
                if(s[i]!='z')  c = s[i] + 1;
                else  c = s[i]- 1;

                s.insert(i, 1, c);
                flag = 1;
                break;
            }
        }

        if(flag == 0){
           if(s[sz-1] != 'a') s.insert(sz, 1, 'a');
           else s.insert(sz, 1, 'b');
        }

        cout<<s<<endl;
    }


    return 0;
}