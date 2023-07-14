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
    ll t;
    cin>>t;
    while(t--){
        string s,s1="codeforces";
        cin>>s;
        ll c=0;
        fr(0,9){
            if(s[i]==s1[i])
            continue;
            c++;
        }
        cout<<c<<endl;
    }
	return 0;
}