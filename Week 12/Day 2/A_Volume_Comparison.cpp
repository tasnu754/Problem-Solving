#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, x;
    cin>>a>>b>>c>>x;

    int v1 = a*b*c;
    int v2 =  pow(x,3);

    if(v1 > v2){
        cout<<"Cuboid"<<endl;
    }
    else if(v1 < v2){
        cout<<"Cube"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }


    return 0;
}