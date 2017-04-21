#include <stdio.h>
#include <string.h>

int n, board[100][100];
int cache[100][100];

int jump (int x, int y) {
    if(x>=n || y>=n)
        return 0;
    if(x == n-1 && y == n-1)
        return 1;
    int &ret = cache[x][y];
    if(ret != -1)
        return ret;
    int jumpSize = board[x][y];
    return ret = (jump(x+jumpSize , y) || jump(x, y+jumpSize));
}

int main () {
    int c ;
    scanf("%d", &c);
    while(c--) {
        memset(cache, -1, sizeof(cache));
        scanf("%d", &n);
        for(int i =0; i<n; i++) {
            for(int j=0; j<n; j++)
                scanf("%d", &board[i][j]);
        }

        if(jump(0,0))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
