//https://codeforces.com/problemset/problem/1993/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        priority_queue<int> odd;
        priority_queue<int,vector<int>,greater<int>> even;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0){
                even.push(v[i]);
            }
            else{
                odd.push(v[i]);
            }
        }
        int ans = 0;
        while(!odd.empty() && !even.empty()){
            int x = odd.top();
            int y = even.top();
            if(x>y){
                odd.push(x+y);
                even.pop();
            }
            else{
                odd.push(x+y);
            }
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}