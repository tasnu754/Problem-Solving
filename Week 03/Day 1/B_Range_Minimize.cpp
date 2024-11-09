#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;

            vector<int> v(n);
            for(int i=0; i<n; i++){
                cin>>v[i];
            }

            sort(v.begin(), v.end());

            int minAns = INT_MAX;
            int x = v[n-2] - v[1];
                
            minAns = min(x, minAns);
            
            
            x = v[n-1] - v[2];
            minAns = min(x, minAns);
            


            x = v[n-3] - v[0]; 
            minAns = min(x, minAns);

            cout<<minAns<<endl;

            
        
           
    }

    return 0;
}