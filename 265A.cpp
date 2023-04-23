#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr2(a,b) for(ll i=a;i>=b;i--)

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    string s, t;
    cin >> s >> t;
    size_t pos = 0;
    for (size_t i = 0; i < t.length(); ++i)
    {
        if (t[i] == s[pos])
        {
            pos += 1;
        }
    }
    cout << pos + 1 << endl;
    return 0;
}ss