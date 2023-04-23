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
    ll n,c1=0,c2=0;
    string s;
    cin>>n>>s;
    fr(0,n-1){
        if(s[i]=='A')
        c1++;
        else
        c2++;
    }
    if(c1>c2)
    cout<<"Anton";
    else if(c1==c2)
    cout<<"Friendship";
    else
    cout<<"Danik";
	return 0;
}