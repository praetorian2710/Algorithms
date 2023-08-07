//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
    s=s+" ";
    vector<string>v;
    string c="";
    for(int i=0;i<s.length();i++){
        if(int(s[i])>=48&&int(s[i])<=57){
            c=c+s[i];
        }
        else{
            if(c!="")
            v.push_back(c);
            c="";
        }
    }
    return v;
}