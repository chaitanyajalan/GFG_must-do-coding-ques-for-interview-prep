// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        int n=s.length();
        int c,m=1;
        int l,h;
        int pi=0,pj=0;
        for(int i=0;i<n;i++){
             int x=1;
            c=i;
            int j=0;
            while(c-j-1>=0&&c+j+1<n){
                j++;
                if(s[c-j]!=s[c+j])
                    break;
                x+=2;
                if(x>m)
                    {
                        m=x;
                        pi=c-j;
                        pj=c+j;
                    }
                
                
            }
            x=2;
            if(i>0){
                l=i-1;
                h=i;
                if(s[l]!=s[h])
                    continue;
                    cout<<l<<h<<endl;
                x=2;
                if(x>m)
                                {
                                    m=x;
                                    pi=l;
                                    pj=h;
                                }
                while(l-1>=0&&h+1<n){
                    
                    if(s[--l]==s[++h])
                        {   

                            x+=2;
                            if(x>m)
                                {
                                    m=x;
                                    pi=l;
                                    pj=h;
                                }
                            else
                                continue;

                        }
                        else
                            break;
                }
                
            }


        }
        string S;
        for(int i=pi;i<=pj;i++){
            S+=s[i];
        }
        return S;
        // code here
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends