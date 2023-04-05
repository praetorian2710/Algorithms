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
    ll n,a;
    cin>>n>>a;
    if(n%2==0){
        if(a<=n/2){
            cout<<2*a-1;
        }
        else
        cout<<(a-(n/2))*2;
    }
    else{
        if(a<=(n+1)/2){
            cout<<2*a-1;
        }
        else
        cout<<(a-((n+1)/2))*2;
    }
	return 0;
}