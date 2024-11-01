#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        vector<char> v;

        for(char c : s){
            if(c != 'b' && c!='B'){
                v.push_back(c);
            }
            else{
                if(c == 'b'){
                    for(int i=v.size()-1; i>=0; i--){
                        if(v[i]>='a' && v[i]<='z'){
                            v.erase(v.begin()+ i);
                            break;
                        }
                    }
                }
                else if(c == 'B'){
                    for(int i=v.size()-1; i>=0; i--){
                        if(v[i]>='A' && v[i]<='Z'){
                            v.erase(v.begin()+ i);
                            break;
                        }
                    }
                }
            }
        }

        for(char c: v){
            cout<<c;
        }

        cout<<endl;
    }


    return 0;
}

