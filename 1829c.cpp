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
        ll n;
        cin>>n;
        priority_queue<int, vector<int>, greater<int> > p1;
        priority_queue<int, vector<int>, greater<int> > p2;
        priority_queue<int, vector<int>, greater<int> > p11;
        fr(1,n){
            ll a;
            string s;
            cin>>a>>s;
            if(s=="10")
            p1.push(a);
            else if(s=="01")
            p2.push(a);
            else if(s=="11")
            p11.push(a);
        }
        if((p1.empty()||p2.empty())&&p11.empty()){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            if(p1.empty()||p2.empty()){
                cout<<p11.top()<<endl;
                continue;
            }
            else if(p11.empty()){
                cout<<p1.top()+p2.top()<<endl;
            }
            else
            {if(p11.top()>p1.top()+p2.top())
            cout<<p1.top()+p2.top()<<endl;
            else
            cout<<p11.top()<<endl;}
        }
    }
	return 0;
}