// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        int A[26]={0};
        int n=a.length(),m=b.length();
        if(n!=m)
            return false;
        for(int i=0;i<n;i++){
            A[a[i]-97]++;
            A[b[i]-97]--;
        }
        for(int i=0;i<26;i++){
            if(A[i]!=0)
                return false;
        }
        return true;

        
        
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends