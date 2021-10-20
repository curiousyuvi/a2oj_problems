#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

bool hasIntersected(ll n, ll arr[])
{
    if (n == 1)
        return false;

    bool hasSmallIntersected = hasIntersected(n - 1, arr + 1);
    if (!hasSmallIntersected)
    {
        ll ourMin = min(arr[0], arr[1]);
        ll ourMax = max(arr[0], arr[1]);

        ll theirMin = *min_element(arr + 2, arr + n);
        ll theirMax = *max_element(arr + 2, arr + n);

        // cout << ourMin << " " << ourMax << " " << theirMin << " " << theirMax << endl;

        if (ourMin < theirMin && (ourMax < theirMax && ourMax > theirMin))
        {
            return true;
        }
        else if (ourMax > theirMax && (ourMin > theirMin && ourMin < theirMax))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;

    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (hasIntersected(n, arr))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}