#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    multiset<int> s;

    for(int i=0; i<n; i++){
        int c;
        cin>>c;

        s.insert(c);
    }

    int prob = 1, ans = 0;
    while(!s.empty()){
        auto it = s.lower_bound(prob);

        if(it == s.end())
            break;
        else{
            ans++;
            s.erase(it);
            prob++;
        }
        
    }

    cout<<ans<<endl;


    return 0;
}