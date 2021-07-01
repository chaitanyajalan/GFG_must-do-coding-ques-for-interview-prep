// { Driver Code Starrrts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function templarrte for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
        sort(arr,arr+n);
        // for(int i=0;i<n;i++)
        // cout<<arr[i]<<" ";
        // cout<<endl;
	    int c=0,j,k;
        for(int i=n-1;i>1;i--){
            j=0;
            k=i-1;
            while(j<k){
                //cout<<arr[i]<<"  "<<arr[j]<<" + "<<arr[k]<<endl;
                if(arr[i]==(arr[j]+arr[k])){
                    c++;
                    j++;
                }
                else if((arr[j]+arr[k])<arr[i]){
                    j++;
                }
                else
                    k--;
                    
            }

            
        }
       
        return c;

	}
};




int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends