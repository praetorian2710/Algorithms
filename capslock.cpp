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
    string s;
    char u;
    bool c = true;
    cin >> s;

    for(int i = 1; i < s.length(); i++)
    {
        if(islower(s[i]))
        {
            c = false;
        }
    }

    if(c == true)
    {
        for(int j = 0; j < s.length(); j++)
        {
            if(islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;
	return 0;
}