// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string s,ans;
        vector<string>words;
        for(int i=0;i<S.length();i++){
            if(S[i]=='.'){
                reverse(s.begin(),s.end());words.push_back(s);
               s="";
               continue;;
            }
            
            s+=S[i];
            
            
                
        }
        words.push_back(s);
        for(int i=words.size()-1;i>=0;i--){
            ans+=words[i];
            if(i!=0)
            ans+='.';
            
        }
        return ans;
    } 
};


// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends