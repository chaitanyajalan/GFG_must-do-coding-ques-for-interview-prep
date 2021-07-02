// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDitinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDitinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDitinctChars (string S)
{
    int A[26]={0};
    int m=0;
    int c=0;
    int x=0;
   int l=0,r=0;
   while(r<S.length()){
       if(A[S[r]-97]==0){
           A[S[r]-97]++;
           r++;
           m=max(m,r-l);
       }
       else{
           while(S[r]!=S[l]){
               A[S[l]-97]--;
               l++;
           }
           A[S[l]-97]--;
           l++;
       }
   }
    return m;
}