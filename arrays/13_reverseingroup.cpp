// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        vector< long long > v;
        int x=n/k;;
        int vi=0;
        if(n%k!=0)
            x++;
      

        int l,c=1;
        for(int i=0;i<x;i++){
            l=(c++)*k-1;
            if(i==x-1){
               // cout<<"i="<<i;
                l=n-1;
                k=n%k;

            }
            
            for(int j=0;j<k;j++){
              //  cout<<"test";
                v.push_back(arr[l--]);
                //cout<<arr[l+1];
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=v[i];
        }
        
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends