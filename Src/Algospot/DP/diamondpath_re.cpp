#include <stdio.h>
#include <string.h>
#define max(a,b) ((a) > (b) ? (a) : (b))

int n, dia[100][200];
int cache[100][200];

int pathSum(int x, int y) {
    if(y == 2*n-2)
        return dia[x][y];
    int &ret = cache[x][y];
    if(ret != -1)
        return ret;
    if(y < n - 1)
        return ret = max(pathSum(x,y+1), pathSum(x+1,y+1)) + dia[x][y];
    if(y >=n - 1) {
        if(x==0)
            return ret = pathSum(x, y+1) + dia[x][y];
        else if(x == 2*n -2 - y)
            return ret = pathSum(x-1, y+1) + dia[x][y];
        else
            return ret = max(pathSum(x-1, y+1), pathSum(x, y+1)) + dia[x][y];
    }
}

int main () {
    int c;
    scanf("%d", &c);
    while(c--) {
        memset(cache, -1, sizeof(cache));
        scanf("%d", &n);
        for(int i =0; i<n; i++) {
            for(int j=0; j<=i; j++)
                scanf("%d", &dia[j][i]);
        }
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n - i - 1; j++)
                scanf("%d", &dia[j][i + n]);
        }
        printf("%d\n",pathSum(0,0));
    }
    return 0;
}
