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
    string s;
    cin>>s;
    int c0=0,c1=0;
    fr(0,s.length()-1){
        if(s[i]=='1'){
        c1++;
        if(c1>=7)
        break;
        }
        else
        c1=0;
    }
    fr(0,s.length()-1){
        if(s[i]=='0'){
        c0++;
        if(c0>=7)
        break;
        }
        else
        c0=0;
    }
    if(c1>=7||c0>=7)
    cout<<"YES";
    else
    cout<<"NO";
	return 0;
}