#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    
    while(t--){
    
        int n, a, b, c;
        cin>>n>>a>>b>>c;

        long long total = (a+b+c);
        long long day = n/total;
        day = day * 3;

        long long remain = n % total;

        if(remain > 0){
            remain -= a;
            day++;
        }
        if(remain > 0){
            remain -= b;
            day++;
        }
        if(remain > 0){
            remain -= c;
            day++;
        }
        cout<<day<<endl;
    
    }


    return 0;
}