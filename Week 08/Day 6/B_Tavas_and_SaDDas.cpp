#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    string s = to_string(n);

    int digit = s.length();

    int pos = 0;

    if(digit==1) pos = 0;
    else{
        for(int i=1; i<digit; i++){
        
            pos += (1<<i);
        
        }
    } 


    int combi = (1<<digit);


    for(int i=0; i<combi; i++){
        string s2 = "";
    
        for(int bit=digit-1; bit>=0; bit--){
        
            if(((i>>bit) & 1) == 0){
                s2 += "4";
            }
            else{
                s2 += "7";
            }
        
        }

        pos++;

        if(s2 == s){
            break;
        }

    }

    cout<<pos<<endl;


    return 0;
}