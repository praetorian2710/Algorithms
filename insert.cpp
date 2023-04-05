#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr1(a,b) for(ll i=a;i>=b;i--)
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
	ll t;
    cin>>t;
    while(t--){
        int n;
        char d;
        string s;
        cin>>n>>d>>s;
        char* c=new char[s.length()+2];
        c[s.length()+1]='\0';
        fr(0,n-1)
        c[i+1]=s[i];
        c[0]=d;
        fr(0,n-1){
            if(c[i]<=c[i+1])
            {
                char t=c[i];
                c[i]=c[i+1];
                c[i+1]=t;
            }
            else
            break;
        }
        fr(0,n)
        cout<<c[i];
        cout<<endl;
    }
    return 0;
}