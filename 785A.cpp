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
    ll n,s=0;
    cin>>n;
    while(n--){
        string t;
        cin>>t;
        if(t=="Tetrahedron")
        s+=4;
        else if(t=="Cube")
        s+=6;
        else if(t=="Octahedron")
        s+=8;
        else if(t=="Dodecahedron")
        s+=12;
        else
        s+=20;
    }
    cout<<s;
	return 0;
}