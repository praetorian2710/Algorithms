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
    cin>>s;
    ll c=0;
    fr(0,s.length()-1){
        if(s[i]<=90 &&s[i]>=65)
        c++;
    }
    if(2*c>s.length()){
        for (auto & c: s) c = toupper(c);
    }
    else
    for (auto & c: s) c = tolower(c);
    cout<<s;
	return 0;
}