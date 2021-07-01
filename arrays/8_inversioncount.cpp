// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for  C


// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.
#define ll long long int

ll merge(ll A[], ll temp[],int left,int mid,int right){
    int i=left,j=mid+1;
    int k=left;
    int inv=0;

    while(i<=mid&&j<=right){
        if(A[i]<A[j]){
            temp[k++]=A[i++];
        }
        else{
            temp[k++]=A[j++];
            inv+=mid-i+1;
        }
    }
        while(i<=mid){
            temp[k++]=A[i]++;
        }
        while(j<=right){
            temp[k++]=A[j++];

        }
        for(int x=left;x<=right;x++){
            A[x]=temp[x];
        }
        return inv;

}

ll mergesort(ll A[], ll temp[],int left,int right){
    int invcount=0;
    int mid=(left+right)/2;
    if(left<right){
        //return invcount;
    invcount+=mergesort(A,temp,left,mid);
    invcount+=mergesort(A,temp,mid+1,right);
    invcount+=merge(A,temp,left,mid,right);
    }
    return invcount;
    
}



long long int inversionCount(long long A[], long long n)
{
    ll temp[n];
    ll inv=mergesort(A,temp,0,n-1);
    return inv;
}



// { Driver Code Starts.

int main() {
    
    long long T;
    scanf("%ld", &T);
    
    while(T--){
        long long N;
        scanf("%ld", &N);
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            scanf("%ld", &A[i]);
        }
        
        printf("%ld\n", inversionCount(A,N) );
    }
    
    return 0;
}
  // } Driver Code Ends