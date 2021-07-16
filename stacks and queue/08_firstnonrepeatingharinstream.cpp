// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	string FirstNonRepeating(string A){
		    queue <char> s;
		    int a[26]={0};
            string ans;
		    
		    for(int i=0;i<A.length();i++){
		        if(a[A[i]-'a']==0){
                    s.push(A[i]);
                }
                a[A[i]-'a']++;
                if(!s.empty())
                while(!s.empty()&&a[s.front()-'a']>1){
                  //  cout<<s.front();
                    s.pop();
                }
               
               if(s.empty())
                ans+='#';
                else
                ans+=s.front();

                

		    }
            return ans;
		    
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends