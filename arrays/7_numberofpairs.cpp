// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.

    long long findpair(int x,int Y[],int m,int ele[]){
        if(x==0)
            return 0;
        if(x==1)
            return ele[0];
        int *iter=upper_bound(Y,Y+m,x);
        long long ans=m-(iter-Y);

        ans+=ele[0]+ele[1];
        if(x==2)
            ans-=(ele[3]+ele[4]);
        if(x==3)
            ans-=ele[2];
        return ans;
        

    }
    long long countPairs(int X[], int Y[], int M, int N)
    {
        sort(Y,Y+N);
        int ele[5]={0};
        for(int i=0;i<N;i++){
            if(Y[i]<5)
                ele[Y[i]]++;
        }
        long long t=0;
        for(int i=0;i<M;i++)
            t+=findpair(X[i],Y,N,ele);
        return t;
        
    }
};


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends