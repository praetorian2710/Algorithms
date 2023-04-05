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
    fr(0,s.length()-1){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
	return 0;
}