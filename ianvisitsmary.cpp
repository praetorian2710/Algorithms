#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr2(a,b) for(ll i=a;i>=b;i--)
#define mod1 1000000007
#define mod2 998244353

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<2<<endl;
        cout<<1<<" "<<b-1<<endl;
        cout<<a<<" "<<b<<endl;
    }
	return 0;
}