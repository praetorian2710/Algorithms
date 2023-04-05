#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i=a;i<=b;i++)

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
	vector<int> v;
    int n,s=0,t;
    cin>>n;
    fr(0,n-1){
        int a;
        cin>>a;
        s+=a;
        v.pb(s);
    }
    cin>>t;
    while(t--){
        int l,h;
        cin>>l>>h;
        if(l==0){
            cout<<v[h]<<endl;
        }
        else
        cout<<v[h]-v[l-1]<<endl;
    }
    return 0;
}