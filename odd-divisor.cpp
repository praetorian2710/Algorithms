#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ll t;
    cin>>t;
    while(t--){
    ll n ;
    cin>>n;
    while(n%2==0){
        n=n/2;
    }
    if(n>1)
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
    }
	return 0;
}