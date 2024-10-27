#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, d;
    cin>>a>>b>>c;

    d = ((a + c -1) / c) * c;

    if(d >= a && d <= b)
        cout<<d<<endl;
    else
        cout<<"-1"<<endl;


    return 0;
}