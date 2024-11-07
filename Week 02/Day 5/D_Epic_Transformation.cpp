#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        map<int, int> mp;

        int n;
        cin>>n;

        while(n--){
            int x;
            cin>>x;
            mp[x]++;
        }

        priority_queue<int> pq;

        for(auto [x, y]: mp){
            pq.push(y);
        }

        while(!pq.empty()){

            if(pq.size() < 2) break;

            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            x--, y--;

            if(x > 0)
                pq.push(x);
            if(y > 0)
                pq.push(y);
        }

        int a = 0;

        while(!pq.empty()){
            a += pq.top();
            pq.pop();
        }

        cout<<a<<endl;
    }


    return 0;
}