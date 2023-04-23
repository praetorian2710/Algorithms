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
    ll n,k,i;
    cin>>n>>k;
    for(i=1;true;i++){
        if((n*i)%10==0||(n*i)%10==k)
        break;
    }
    cout<<i;
	return 0;
}