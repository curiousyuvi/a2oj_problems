#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        if (y > x && y >= -x)
        {
            cout << 2 + 4 * (y - 1) << endl;
        }
        else if (y < -x && y >= x)
        {
            cout << 3 + 4 * (-x - 1) << endl;
        }
        else if (y < x && y <= -x + 1)
        {
            cout << 4 * (-y) << endl;
        }
        else
        {

            cout << 1 + 4 * (x - 1) << endl;
        }

        return 0;
    }
}