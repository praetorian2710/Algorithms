#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)

using namespace std;

int main()
{
    int n, l(1), ml(1);
    cin >> n;
    int profits[n];

    for (int i = 0; i < n; i++)
    {
        cin >> profits[i];
        if (i > 0)
            if (profits[i] >= profits[i - 1])
            {
                l++;
                ml = max(ml, l);
            }
            else
                l = 1;
    }

    cout << ml << endl;
    return 0;
}
