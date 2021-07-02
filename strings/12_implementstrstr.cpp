// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    int n=s.length();
    int m=x.length();
    char c=x[0];
    
     for(int i=0;i<n;i++){
        if(n-i<m)
            return -1;
        if(s[i]==c){
            int flag=1;
            for(int j=0;j<m;j++)
            {
                if(x[j]!=s[i+j]){
                    flag=0;
                    break;
        
                }
                

            }
            if(flag)
                    return i;
        }
        
     }
     return -1;
}