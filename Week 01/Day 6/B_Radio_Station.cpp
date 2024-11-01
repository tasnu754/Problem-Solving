#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin>>n>>m;

    vector<pair<string, string>> pv;
    vector<tuple<string, string, string>> tv;

    while(n--){
        string name, ip;
        cin>>name>>ip;

        pv.push_back({name, ip+';'});

    }

    for(int i=0; i<m; i++){
        string nm, ip;
        cin>>nm>>ip;

        for(int i=0; i<pv.size(); i++){
            if(pv[i].second == ip){
                tv.push_back({nm, ip, '#'+pv[i].first});
            }
        }
    }


    for( auto t : tv){
        cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;
    }


    return 0;
}