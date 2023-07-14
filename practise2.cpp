#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr2(a,b) for(ll i=a;i>=b;i--)

using namespace std;
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int c = 0, h = s.length() - 1;
        while (h >= 0 && s[h] == ' ') h--;
        while (h >= 0 && s[h] != ' ') {
            c++;
            h--;
        }
        return c;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    string s;
    cin>>s;
    int ans=lengthOfLastWord(s);
    cout<<ans;
	return 0;
}