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
        
        string t = "Timur";
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());

        if(n != 5)
            cout<<"NO"<<endl;
        else{

            if(s == t)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }


    return 0;
}