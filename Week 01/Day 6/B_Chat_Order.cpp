#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    deque<string> v;

    while(n--){
        string s;
        cin>>s;

        auto it = find(v.begin(), v.end(), s);

        if(it != v.end()){
            v.erase(it);
        }

        v.push_front(s);
    }


    for(string x : v){
        cout<<x<<endl;
    }


    return 0;
}



