#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, f = 0, l = 0;
        cin>>n;

        string s;
        cin>>s;

        for(int i=0; i<n; i++){
            if(s[i] == 'B'){
                f = i;
                break;
            }
        }

        for(int i=n-1; i>=0; i--){
            if(s[i] == 'B'){
                l = n - i - 1;
                break;
            }
        }

        cout<<(n-(f+l))<<endl;
    }


    return 0;
}