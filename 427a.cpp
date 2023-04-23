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
    cin>>n;
    fr(0,n-1){
        ll a;
        cin>>a;
        if(a==-1){
            if(c1>0){
                c1--;
            }
            else
            c2++;
        }
        else{
            c1+=a;
        }
    }
    cout<<c2;
	return 0;
}