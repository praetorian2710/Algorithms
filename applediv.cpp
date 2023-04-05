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
	int n;
    cin>>n;
    vector<int>v;
    fr(1,n){
        int a;
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    int s1=0,s2=0,ld=0;
    fr(0,n-1){
        s1=s1+v[i];
    }
    ld=s1;
    fr(0,n-1){
        s1-=v[i];
        s2+=v[i];
        int d=abs(s1-s2);
        cout<<d<<endl;
        if(d<ld)
        ld=d;
    }
    cout<<ld;
}