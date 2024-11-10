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

        vector<int> dq(n);
        set<int> s;

        for(int i=0; i<n; i++){
            cin>>dq[i];
        }

        for(int i=n-1; i>=0; i--){
            if(s.find(dq[i]) == s.end()){
                s.insert(dq[i]);
            }
            else break;

        }

        cout<<n-s.size()<<endl;

        
    }


    return 0;
}