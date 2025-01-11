#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, p, q;
    cin>>n>>a>>b>>p>>q;

    long long lcm = (a * __gcd(a, b)) / b;
    long long over = n / lcm;
    long long ans = (n/(a-over)) * p + (n/(b-over)) * q;
    
    if(p > q){
        ans += over * p;
    }
    else{
        ans += over * q;
    }

    cout<<ans<<endl;



    return 0;
}