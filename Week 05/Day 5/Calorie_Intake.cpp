#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin>>x>>y>>z;

    if((y*z) <= x)
        cout<<x-(y*z)<<endl;
    else
        cout<<-1<<endl;


    return 0;
}