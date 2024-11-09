#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, l;
    double d;
    cin>>w>>d>>l;

    int x = (d/2) + w;
    int y = (d/2) + l;

    double r = 4 - (w+d+l);

    if((x+r) > y)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


    return 0;
}