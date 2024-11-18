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

        int sz = (n* (n-1)) / 2;

        set<int> st;

        for(int i=0; i<sz; i++){
        
            int x;
            cin>>x;

            st.insert(x);
        
        }

        if(st.size() < n){
            st.insert(*(--st.end()) + 2);
        }



        for(auto &val : st){
            cout<<val<<" ";;
        }
        cout<<endl;
    
    }


    return 0;
}