// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    string swap(string s,int x,int y){
	       char c=s[x];
	       s[x]=s[y];
	       s[y]=c;
	       return s;
	    }
	    void rPerm(string s, vector<string> &v,int n,int x){
	        if(x==n-1){
	            v.push_back(s);
	            return;}
	           
	        for(int i=x;i<n;i++){
	            rPerm(swap(s,x,i),v,n,x+1);
	        }
	       
	    }
		vector<string>find_permutation(string S)
		{
		    vector<string> v;
		    int n=S.length();
		    rPerm(S,v,n,0);
		    sort(v.begin(),v.end());
		    return v;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends