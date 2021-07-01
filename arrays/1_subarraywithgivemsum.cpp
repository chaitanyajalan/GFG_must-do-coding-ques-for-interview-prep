// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        int sum=0,flag=0;
        int l=0,r=0;
        vector<int> v;
        for (r = 0; r < n; r++)
        {
            if(sum==s){
                flag=1;
                break;
            }
            sum+=arr[r];
            
            
            if(sum>s){
                while(sum>s){
                    sum-=arr[l++];
                }
            }
        }
        if(sum==s)
        {flag=1;}
        if(!flag)
        {   
            v.push_back(-1);
        }
        else{
            v.push_back(++l);
            v.push_back(r);
        }
        return v;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends