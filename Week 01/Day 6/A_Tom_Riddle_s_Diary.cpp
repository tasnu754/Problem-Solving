#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<string> v;

    while(n--){
        string s;
        cin>>s;

        auto it = find(v.begin(), v.end(), s);

        if(it != v.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        v.push_back(s);
    }


    return 0;
}