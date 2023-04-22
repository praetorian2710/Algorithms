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
    ll n,c=0;
    cin>>n;
    char a[n];
    fr(0,n-1)
    cin>>a[i];
    fr(1,n-1){
        if(a[i]==a[i-1])
        c++;
    }
    cout<<c;
	return 0;
}