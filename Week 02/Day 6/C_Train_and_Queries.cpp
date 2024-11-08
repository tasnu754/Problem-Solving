#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        cin.ignore();
        int n, k;
        cin>>n>>k;

        map<int, set<int>> mp;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;

            mp[x].insert(i);
        }

        while(k--){
            int s, e;
            cin>>s>>e;

            if(mp.find(s)==mp.end() || mp.find(e)==mp.end())
                cout<<"NO"<<endl;

            else{
                auto sit = mp[s].begin();
                auto eit = mp[e].rbegin();

                if(*sit < *eit)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }


    }


    return 0;
}