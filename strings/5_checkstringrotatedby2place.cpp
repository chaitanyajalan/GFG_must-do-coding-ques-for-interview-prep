// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n=str1.length(),flag1=1,flag2=1;
       for(int i=0;i<n;i++){
           if(str1[i]!=str2[(i+2)%n])
            flag1=0;
       }
       for(int i=0;i<n;i++){
           if(str1[i]!=str2[(n-2+i)%n])
            flag2=0;
            
       }
       if(flag1||flag2)
        return true;
        return false;
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends