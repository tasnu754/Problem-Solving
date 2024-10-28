#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    map<string, string> mp;

    while(n--){
        string old, newH;
        cin>>old>>newH;

        int find = 0;

        if(mp.empty()) mp[old] = newH;

        else{

            for(auto it : mp){
                if(old == it.second){
                    mp[it.first] = newH;
                    find = 1;
                    break;
                }
            }

            if(find == 0){
                mp[old] = newH;
            }
        }
    }

    cout<<mp.size()<<endl;

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }


    return 0;
}