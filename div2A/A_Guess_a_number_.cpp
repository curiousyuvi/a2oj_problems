#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll minL = -2e9, maxL = 2e9;

    while (n--)
    {

        string q;
        ll x;
        char a;
        cin >> q >> x >> a;

        if (q == ">=")
        {
            if (a == 'Y')
            {
                minL = max(x, minL);
            }
            else
            {
                maxL = min(x - 1, maxL);
            }
        }
        else if (q == "<=")
        {
            if (a == 'Y')
            {
                maxL = min(x, maxL);
            }
            else
            {
                minL = max(x + 1, minL);
            }
        }
        else if (q == ">")
        {
            if (a == 'Y')
            {
                minL = max(x + 1, minL);
            }
            else
            {
                maxL = min(x, maxL);
            }
        }
        else if (q == "<")
        {
            if (a == 'Y')
            {
                maxL = min(x - 1, maxL);
            }
            else
            {
                minL = max(x, minL);
            }
        }

        // cout << minL << " " << maxL << endl;
        if (minL > maxL)
        {
            cout << "Impossible" << endl;
            return 0;
        }
    }

    cout << minL << endl;
    return 0;
}