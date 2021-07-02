// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
   string longestCommonPrefix (string arr[], int N)
    {
        string s="";
        char c;
        int n=0;
        for(int i=0;i<arr[0].length();i++){
                c=arr[0][i];
            int flag=1;
            for (int j = 0; j < N; j++)
            {
                if(i>=arr[j].length()||arr[j][i]!=c)
                {
                    flag=0;
                    break;
                }
                   
                
            }
            if(!flag)
                break;
            s+=c;
            


        }
    if(s.length()==0)
        s="-1";
    return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends