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
    char str[100];
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++){
		if (str[i] >= '5' && str[i] <= '9'){
			if (i == 0 && str[i] == '9')	continue;
			str[i] = '0' + '9' - str[i];
		}
	}
	printf("%s\n", str);
	return 0;
}