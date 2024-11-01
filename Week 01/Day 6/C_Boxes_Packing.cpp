#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    map<int, int> mp;
    int max = 0;


    while(n--){
        int x;
        cin>>x;

        mp[x]++;

        if(max < mp[x]){
            max = mp[x];

        } 

        
    }

    cout<<max<<endl;

    return 0;
}