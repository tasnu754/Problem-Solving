#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin>>a>>b>>c;

    if(a <= (b+c))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}