#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int slf, btl , sum = 0;
        cin>>slf>>btl;

        map<int, int> mp;
        int maxCst = 0;

        for(int i=1; i<=btl; i++){
            int brand, cst;
            cin>>brand>>cst;

            mp[brand] += cst;
            maxCst += cst;

        }


        vector<int> cost;


        for(auto it: mp){
            cost.push_back(it.second);
        }

        sort(cost.rbegin(), cost.rend());

        if(slf >= mp.size()){
            cout<<maxCst<<endl;
        }
        else{
            maxCst = 0;

            for(int i=0; i<slf; i++){
                maxCst += cost[i];
            }

            cout<<maxCst<<endl;
        }



    }


    return 0;
}