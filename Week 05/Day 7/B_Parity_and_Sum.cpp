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

        vector<long long> odd;
        vector<long long> even;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            if (x % 2)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        if (odd.size() == 0 || even.size() == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            long long evenSz = even.size();
            long long maxOdd = odd.back();

            int flag = 0;
            int ans = 0;

            for (int i = 0; i < evenSz; i++)
            {

                if (even[i] > maxOdd)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    ans++;
                    maxOdd = maxOdd + even[i];
                }
            }

            if (flag)
                cout << evenSz + 1 << endl;
            else
                cout << ans << endl;
        }
    }

    return 0;
}