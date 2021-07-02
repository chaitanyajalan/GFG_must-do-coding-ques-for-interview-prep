// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rRemoveDuplicates(string s,int n){
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]||s[i]==s[i-1])
                continue;
            ans+=s[i];
        }
        if(ans.length()==n)
            return ans;
        return rRemoveDuplicates(ans,ans.length());

    }
    string remove(string s){
        int i=0;
        int n=s.length();
       return rRemoveDuplicates(s,n);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends