class Solution {
public:
    vector<int> delRow = {-1,0,1,0};
    vector<int> delCol = {0,1,0,-1};
    bool isValid(int& i, int& j, int& n, int& m){
        if(i<0 || i>=n) return false;
        if(j<0 || j>=m) return false;

        return true;
    }

void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& visited){
    int n = grid.size();
    int m = grid[0].size();
    visited[row][col]=1;
    queue<pair<int,int>> q;
    q.push({row,col});

    while(!q.empty()){
        
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for(int i = 0;i<4;i++){
            int nRow = row+delRow[i];
            int nCol = col+delCol[i];
            if(isValid(nRow,nCol,n,m) && !visited[nRow][nCol] && grid[nRow][nCol]=='1'){
                visited[nRow][nCol] =1;
                q.push({nRow,nCol});
            }
        }
    }
    
}
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n,vector<int>(m,0));
        int count = 0;

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    visited[i][j]=1;
                    bfs(i,j,grid,visited);
                    count++;
                }
            }
        }
        return count;
    }
};
