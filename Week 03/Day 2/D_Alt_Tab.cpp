#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<string> v;
    set<string> st;
    
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        v.push_back(s);
        
    }



    
    string ans = "";
    for(int i=n-1; i>=0; i--){
        int sz = v[i].size();

        if(st.find(v[i]) == st.end()){
            ans += v[i][sz-2];
            ans += v[i][sz-1];

            st.insert(v[i]);
        }
    }

    cout<<ans<<endl;


    return 0;
}