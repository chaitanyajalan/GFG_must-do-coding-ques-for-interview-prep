// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void swap(int i,int a[]){
        int t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
	// Program for zig-zag conversion of array
	void zigZag(int a[], int n) {
	    bool flag=true; // for a[i]<a[i+1]
        for(int i=0;i<n-1;i++){
            if((a[i]>a[i+1]&&flag)||(a[i]<a[i+1]&&!flag)){
                swap(i,a);
                
            }
            flag=!flag;
        }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends