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
        ll n,c1=0;
        cin>>n;
        int a[n];
        fr(0,n-1){
        cin>>a[i];
        if(a[i]==1)
        c1++;
        }
        ll c=0,maxc=0;
        fr(0,n-1){
            if(a[i]==0){
                for(int j=i;j<n;j++){
                    if(a[j]==0)
                    c++;
                    else
                    break;
                }
                maxc=max(maxc,c);
                c=0;
            }
        }
        cout<<maxc<<endl;
    }
	return 0;
}