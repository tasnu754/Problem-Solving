#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;

    string ans = "None";

    for(int i=0; i<26; i++){
        char c = 'a' + i;
        int pos = s.find(c);

        if(pos > s.size()){
            ans = c;
            break;
        }
    }

        cout<<ans<<endl;



    return 0;
}