/*The function returns a sorted array of strings which represents
the directions mouse will take to reach the destination.
You are required to complete the below method. */
//#include <vector>

bool IsValid(int maze[MAX][MAX], vector<vector<bool>>& visited, int x, int y, int n)
{
    bool bReturn = false;
    
    if(x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && visited[x][y] == false)
        bReturn = true;
        
    return bReturn;
}

void SolveMazeUtil(int maze[MAX][MAX], vector<vector<bool>>& visited, vector<string>& result, int i, int j, int n, string str)
{
    if(IsValid(maze, visited, i, j, n))
    {
        if(i==n-1 && j==n-1){
            result.push_back(str);
            return;
        }
        
        visited[i][j] = true;
        SolveMazeUtil(maze, visited, result, i-1, j, n, str+"U");
        SolveMazeUtil(maze, visited, result, i+1, j, n, str+"D");
        SolveMazeUtil(maze, visited, result, i, j-1, n, str+"L");
        SolveMazeUtil(maze, visited, result, i, j+1, n, str+"R");
        visited[i][j] = false;
    }
}

vector<string> printPath(int m[MAX][MAX], int n)
{
    //Your code here    
    vector<string> result;
    string str="";
    vector<vector<bool>> visited(n,vector<bool>(n,false));
    
    SolveMazeUtil(m, visited, result, 0, 0, n, str);
    sort(result.begin(),result.end());
    
    return result;
}