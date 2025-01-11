#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<long long> v(n);
    long long maxS = INT_MIN, remain = 0;

    for(int i=0; i<n; i++){
    
        cin>>v[i];
        
        remain += v[i];
        maxS = max(maxS, v[i]);
    
    }

    long long Gcd = 0;
    for(int i=0; i<n; i++){
    
        Gcd = __gcd(Gcd, (maxS - v[i]));
        
    
    }

    long long total = n * maxS;
    long long loss = total - remain;

    cout<<(loss/Gcd)<<" "<<Gcd<<endl;



    return 0;
}