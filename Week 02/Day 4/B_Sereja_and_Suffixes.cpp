#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin>>n>>m;

    vector<int> v(n+1), cnt(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
        set<int> s;


    for(int i=n; i>=1; i--){
        s.insert(v[i]);
        cnt[i] = s.size();
    }

    while(m--){
        int idx;
        cin>>idx;

        cout<<cnt[idx]<<endl;

    }


    return 0;
}