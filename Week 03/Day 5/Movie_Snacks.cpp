#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z, cst = 0;
    cin>>x>>y>>z;

    if((x+y) > z){
        cst += 2*z;
    }
    else{
        cst += (2*(x+y));
    }

    cst += y;
    cout<<cst<<endl;


    return 0;
}