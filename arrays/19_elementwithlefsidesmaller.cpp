// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int a[], int n) {
    int mina[n],maxa[n];
    int m=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        m=max(m,a[i]);
        maxa[i]=m;
    }
    m=INT_MAX;
    for (int i = n-1; i >=0; i--)
    {
        m=min(m,a[i]);
        mina[i]=m;
    }
       for (int i = 1; i < n-1; i++)
    {
        if(a[i]>=maxa[i]&&a[i]<=mina[i])
            return a[i];
        
    }
    return -1;
    
    
    
    
    
}