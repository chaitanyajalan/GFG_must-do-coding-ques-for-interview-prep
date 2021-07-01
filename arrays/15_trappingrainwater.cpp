// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int lmax[n],rmax[n];
        int lb=0,rb=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(lb>arr[i])
                lmax[i]=lb-arr[i];
            else
                lmax[i]=0;
            lb=max(lb,arr[i]);
        }
        for(int i=n-1;i>=0;i--){
            if(rb>arr[i])
                rmax[i]=lb-arr[i];
            else
                rmax[i]=0;
            rb=max(rb,arr[i]);
        }
        for(int i=0;i<n;i++){
            sum+=min(lmax[i],rmax[i]);
        }
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends