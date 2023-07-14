#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr2(a,b) for(ll i=a;i>=b;i--)

using namespace std;

const int MAXN = 1005;

int n, m;
int a[MAXN][MAXN];
bool visited[MAXN][MAXN];

// Recursive DFS function to explore the connected component containing (i, j)
int dfs(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == 0 || visited[i][j]) {
        return 0;
    }

    visited[i][j] = true;
    int volume = a[i][j];
    volume += dfs(i + 1, j);
    volume += dfs(i - 1, j);
    volume += dfs(i, j + 1);
    volume += dfs(i, j - 1);

    return volume;
}

// Function to find the largest volume of a lake in the grid
int largestLake() {
    int largest_volume = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            visited[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > 0 && !visited[i][j]) {
                int volume = dfs(i, j);
                largest_volume = max(largest_volume, volume);
            }
        }
    }
    return largest_volume;
}

int main() {
    #ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ll t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        fr(0,n-1){
            for(int j=0;j<m-1;j++)
            cin>>a[n][m];
        }
        ll ans=largestLake();
        cout<<ans<<endl;

    }
	return 0;
}
   
