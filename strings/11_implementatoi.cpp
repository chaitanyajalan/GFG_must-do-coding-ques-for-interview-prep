// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
     int val(char s){
        if(s=='1')
            return 1;
         if(s=='2')
            return 2;
             if(s=='3')
            return 3;
             if(s=='4')
            return 4;
             if(s=='5')
            return 5;
             if(s=='6')
            return 6;
             if(s=='7')
            return 7;
             if(s=='8')
            return 8;
             if(s=='9')
            return 9;
             if(s=='0')
            return 0;
            return -1;
    }
    int atoi(string str)
    {
       
       int n=0;
       int flag=0;
       for(int i=0;i<str.length();i++){
           if(i==0&&str[i]=='-'){
            flag=1;
            continue;}
           if(val(str[i])==-1)
            return -1;
            n=n*10+val(str[i]);
       }
       if(flag)
        n*=-1;
       return n;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends