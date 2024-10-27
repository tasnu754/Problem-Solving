#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    string s = to_string(n);
    
    int k = 4 - s.size();

    while(k){
        cout<<"0";
        k--;
    }
    cout<<s<<endl;


    return 0;
}