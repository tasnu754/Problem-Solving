#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        string a,b;
        cin>>a>>b;

        int asz = a.size();
        int bsz = b.size();

        if(a[asz-1]=='M' && b[bsz-1]=='S'){
            cout<<'>'<<endl;
        }
        
        else if(a[asz-1]=='S' && b[bsz-1]=='M'){
            cout<<'<'<<endl;
        }
        else if(a[asz-1]=='S' && b[bsz-1]=='L'){
            cout<<'<'<<endl;
        }
        
        else if(a[asz-1]=='L' && b[bsz-1]=='S'){
            cout<<'>'<<endl;
        }
        else if(a[asz-1]=='L' && b[bsz-1]=='M'){
            cout<<'>'<<endl;
        }
        else if(a[asz-1]=='M' && b[bsz-1]=='L'){
            cout<<'<'<<endl;
        }
        else if(a[asz-1]=='M' && b[bsz-1]=='M'){
            cout<<'='<<endl;
        }
        else if(a[asz-1]=='S' && b[bsz-1]=='S'){
            if(asz < bsz)
                cout<<'>'<<endl;
            else if(asz > bsz)
                cout<<'<'<<endl;
            else
                cout<<'='<<endl;
        }
        else if(a[asz-1]=='L' && b[bsz-1]=='L'){
            if(asz > bsz)
                cout<<'>'<<endl;
            else if(asz < bsz)
                cout<<'<'<<endl;
            else
                cout<<'='<<endl;
        }
        
    }


    return 0;
}