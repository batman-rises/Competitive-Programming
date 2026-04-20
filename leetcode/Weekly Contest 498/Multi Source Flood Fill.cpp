class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> ans(n,vector<int> (m,0));
        vector<vector<int>> dist(n,vector<int> (m,1e8));
        
        for(int i=0;i<sources.size();i++){
            int r=sources[i][0];
            int c=sources[i][1];
            int col=sources[i][2];
            // if(dist[r][c]>0 || (dist[r][c]==0 && ans[r][c] < col)){
                q.push({{r,c},col});
                ans[r][c]=col;
                dist[r][c]=0;
            // }
        }
        
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int sr=it.first.first;
            int sc=it.first.second;
            int scol=it.second;
            
            for(int i=0;i<4;i++){
                int nrow=sr+delrow[i];
                int ncol=sc+delcol[i];
                int ndist=dist[sr][sc]+1;
                
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m ){
                    if(ndist<dist[nrow][ncol] || (ndist==dist[nrow][ncol] && ans[nrow][ncol]<scol)){
                        ans[nrow][ncol]=scol;
                        q.push({{nrow,ncol},scol});
                        dist[nrow][ncol]=ndist;
                    }      
                }
            }
        }
        return ans;
    }
};