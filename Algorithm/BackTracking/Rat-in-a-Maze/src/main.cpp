/*The function returns a sorted array of strings which represents
the directions mouse will take to reach the destination.
You are required to complete the below method. */
//#include <vector>

bool IsSafe(int maze[MAX][MAX], int n, int x, int y)
{
    bool bReturn = false;
    
    if(x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1)
        bReturn = true;
        
    return bReturn;
}

bool SolveMazeUtil(int maze[MAX][MAX], int n, int i, int j, vector<string>& sol)
{
    bool bReturn = false;
    
    // Last position (n-1, n-1)
    if(i == n-1 && j == n-1 )
    {
        bReturn = true;    
    }
    
    if(IsSafe(maze, n, i, j) == true)
    {
        // Move Down
        if(SolveMazeUtil(maze, n, i+1, j, sol) == true)
        {
            cout << "D";
            bReturn = true;
        }
        
        // Move Right
        if(SolveMazeUtil(maze, n, i, j + 1, sol) == true)
        {
            cout << "R";
            bReturn = true;
        }
    }
    
    return bReturn;
}

void SolveMaze(int maze[MAX][MAX], int n, vector<string>& sol)
{
    vector<string> vecReturn;
    
    if(SolveMazeUtil(maze, n, 0, 0, vecReturn) == false)
    {
        cout << "Solution doesn't exist" << endl;
    }
}

vector<string> printPath(int m[MAX][MAX], int n)
{
    //Your code here    
    vector<string> sol;
    
    SolveMaze(m, n, sol);
    
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}