#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#define MAXSIZE 8
//#define DEBUG

int chess[2][MAXSIZE][MAXSIZE];

void inputArray(int n) {
    for (int i=0; i<n; i++){
        for (int j=0;j<n;j++) {
            int temp;
            scanf("%d", &temp);
            chess[0][i][j] = (temp == 1);
        }
    }
}

void printArray(int n, int flag) {
    for (int i=0; i<n; i++){
        for (int j=0;j<n;j++) {
            if (j == n-1)
                printf("%d\n", chess[flag][i][j]);
            else
                printf("%d ", chess[flag][i][j]);
        }
    }
}

int neighbors(int n, int current, int cell_x, int cell_y)
{
    int neighbor = 0;
    for (int dx=-1;dx<=1;dx++) {
        for (int dy=-1; dy<=1; dy++) {
            if (!(dy==0 && dx==0)) {
                int x = cell_x+dx;
                int y = cell_y+dy;
                if (x>=0 && x<n && y>=0 && y<n && chess[current][x][y])
                    neighbor++;
            } 
        }
    }
    return neighbor;
}

void generateOnce(int n, int from, int to)
{
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            int neighbor = neighbors(n,from, i, j);
            if (chess[from][i][j])
                chess[to][i][j] = (neighbor==2 || neighbor==3);
            else
                chess[to][i][j] = (neighbor==3);
        }
    }

}

int main()
{
    int n, k;
    setbuf(stdout,NULL);
    scanf("%d%d",&n ,&k);
    assert(n>=1 &&n<100 && k>0);

    int current=0, next=1;
    inputArray(n);
    for (int iter=0; iter<k; iter++) {
        generateOnce(n, current, next);
        current = (current == 0) ? 1 : 0;
        next = (next == 0) ? 1 : 0;
    }
    printArray(n, current);
}