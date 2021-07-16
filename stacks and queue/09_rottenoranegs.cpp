// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
       queue <pair<int,int>> q;
       int n=grid.size();
       int m=grid[0].size();
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]==2)
                {
                    q.push(make_pair(i,j));
                }
           }
       }
       int timestamp=0;
       int f=0;//flag
       q.push(make_pair(-1,-1));
       while(!q.empty()){
           if((q.front()).first==-1){
               if(f){
                timestamp++;
                f=0;
               }
               else{
                   break;
               }
               q.pop();
               q.push(make_pair(-1,-1));
               continue;


           }
           pair <int,int>x(q.front());
          int i=x.first;
          int j=x.second;
            if(i!=0) 
                {
                    if(grid[i-1][j]==1){
                        grid[i-1][j]=2;
                        f=1;
                        q.push(make_pair(i-1,j));
                    }
                }
            if(i!=n-1) 
                {
                    if(grid[i+1][j]==1){
                        grid[i+1][j]=2;
                        f=1;
                        q.push(make_pair(i+1,j));
                    }
                }
            if(j!=0) 
                {
                    if(grid[i][j-1]==1){
                        grid[i][j-1]=2;
                        f=1;
                        q.push(make_pair(i,j-1));
                    }
                }
            if(j!=m-1) 
                {
                    if(grid[i][j+1]==1){
                        grid[i][j+1]=2;
                        f=1;
                        q.push(make_pair(i,j+1));
                    }
                }
                q.pop();
            
            
       }
        for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]==1)
                {
                    return -1;
                }

           }
       }
       return timestamp;

    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends