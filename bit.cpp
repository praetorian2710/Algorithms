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
    int t,c=0;
    cin>>t;
    fr(1,t){
        string s;
        cin>>s;
        if(s=="++X"||s=="X++")
        c++;
        else
        c--;
    }
    cout<<c;
	return 0;
}