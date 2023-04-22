#include <bits/stdc++.h>
#define ll int
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr1(a,b) for(ll j=a;j<=b;j++)

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    int t;
    cin>>t;
    while(t--){
        ll n,m,x1,x2,y1,y2,ans;
        cin>>n>>m;
        cin>>x1>>y1>>x2>>y2;
        cout<<abs(x1-x2)+abs(y1-y2);
        cout<<endl;
    }
	return 0;
}