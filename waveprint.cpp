#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    vector<int> v;
    int start=n-1,ind=1;
    for(int i=start;i>=0;i--){
        if(ind==1){
            for(int j=0;j<m;j++){
                v.push_back(arr[j][i]);
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                v.push_back(arr[j][i]);
            }
        }
        ind*=-1;
    }
    return v;
}
