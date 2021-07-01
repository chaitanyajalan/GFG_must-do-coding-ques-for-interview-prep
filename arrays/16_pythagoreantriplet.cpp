// { Driver Code Starts
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    ll asq[n];
        for (int i = 0; i < n; i++)
        {
            asq[i]=pow(arr[i],2);

        }
        

        sort(asq,asq+n);
        //for (int i = 0; i < n; i++)
       //
       // cout<<endl;
        
        for(int i=n-1;i>1;i--){
            int l=0;
            int r=i-1;
            while(l<r){
                if((asq[l]+asq[r])==asq[i])
                    {return true;}
                while(asq[l]+asq[r]<asq[i]){
                    l++;//cout<<".."<<i;}
                }
                while(asq[l]+asq[r]>asq[i]){
                   // cout<<asq[i]+asq[r]<<" "<<asq[i];
                    r--;}
                   // cout<<"__"<<i;}
                
            }
        }
        return false;
        
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends