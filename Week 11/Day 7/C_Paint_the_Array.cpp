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

        vector<long long> v(n);
        for (int i = 0; i < n; i++){

            cin >> v[i];
        }

        long long G1 = 0;
        for (int i = 0; i < n; i += 2){

            G1 = __gcd(G1, v[i]);
        }

        bool flag = true;
        for (int i = 1; i < n; i += 2){

            if ((v[i] % G1) == 0){
                flag = false;
            }
        }

        if (flag){
            cout << G1 << endl;
        }
        else{
            long long G2 = 0;
            for (int i = 1; i < n; i += 2){

                G2 = __gcd(G2, v[i]);
            }

            bool flag = true;
            for (int i = 0; i < n; i += 2){

                if ((v[i] % G2) == 0)
                {
                    flag = false;
                }
            }

            if(flag)
                cout<<G2<<endl;
            else
                cout<<0<<endl;
            
        }
    }

    return 0;
}