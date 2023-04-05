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
    set<char>s1;
    string s;
    cin>>s;
    fr(0,s.length()-1){
        s1.insert(s[i]);
    }
    if(s1.size()%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
		return 0;

}