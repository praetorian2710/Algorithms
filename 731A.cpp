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
    char start='a';
    ll sum=0;
    for(int i=0;i<s.size();i++){
    ll l1=abs(s[i]- start);
    ll l2=26-abs(l1);
    sum+=min(l1,l2);
    start=s[i];
}
cout<<sum<<endl;
	return 0;
}
