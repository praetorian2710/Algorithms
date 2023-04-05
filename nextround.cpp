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
    int n;
    int k;
    cin>>n>>k;
    vector<int>v;
    fr(0,n-1)
    {
        int a;
        cin>>a;
        v.pb(a);
    }
    int c=0;
    fr(0,n-1){
        if(v[i]>=v[k-1]&&v[i]>0)
        c++;

    }
    cout<<c;
	return 0;
}