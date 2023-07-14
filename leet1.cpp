#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr2(a,b) for(ll i=a;i>=b;i--)

using namespace std;
int isWinner(vector<int>& player1, vector<int>& player2) {
        int score1=0,score2=0;
        for(int i=0;i<player1.size();i++){
                if(player1[i-1]==10||player1[i-2]==10)
                score1+=2*player1[i];
                else
                score1+=player1[i]; 
                if(player2[i-1]==10||player2[i-2]==10)
                score2+=2*player2[i];
                else
                score2+=player2[i];
        }
        if(score1>score2)
            return 1;
        else if(score2>score1)
            return 2;
        else
            return 0;
    }
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    vector<int>v1,v2;
    fr(0,3){
        ll a;
        cin>>a;
        v1.pb(a);
    }
    fr(0,3){
        ll a;
        cin>>a;
        v2.pb(a);
    }
    int t=isWinner(v1,v2);
    cout<<t;
	return 0;
}