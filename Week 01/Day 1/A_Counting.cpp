#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, ans = 0;
    cin>>a>>b;

    if(b >a)  ans = (b-a) + 1;

    cout<<ans<<endl;

    return 0;
}