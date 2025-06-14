class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>dis(n,vector<int>(n,1e9));
        dis[0][0]=1;
        if(grid[0][0]!=0||grid[n-1][n-1]!=0)
        {
            return -1;
        }
        queue<pair<int,int>>q;
        q.push({0,0});
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            if(row==n-1&&col==n-1)
            {
                return dis[row][col];
            }
            for(int i=-1;i<=1;i++)
            {
                for(int j=-1;j<=1;j++)
                {
                    int r=row+i;
                    int c=col+j;
                    if(r>=0&&r<n&&c>=0&&c<n&&dis[r][c]>dis[row][col]+1&&grid[r][c]==0)
                    {
                        dis[r][c]=dis[row][col]+1;
                        q.push({r,c});
                    }
                }
            }
        }
        return -1;
    }
};