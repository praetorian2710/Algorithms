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
        string s;
        cin>>s;
        int day, month, year;
        stringstream ss(s);
        char c;
        ss >> day >> c >> month >> c >> year;
        if ((day <= 12) && (month <= 12)) {
        cout<<"Both"<<endl;
    }

    // check if it is in DD/MM/YYYY format
    else if ((day <= 31) && (month <= 12)) {
        cout<<"DD/MM/YYYY"<<endl;
    }

    // check if it is in MM/DD/YYYY format
    else if ((month <= 31) && (day <= 12)) {
        cout<<"MM/DD/YYYY"<<endl;
    }
    }
	return 0;
}