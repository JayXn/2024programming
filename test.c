#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#define CHESSSIZE 8


int chess[2][CHESSSIZE][CHESSSIZE];

void inputArray(int n) {
    for (int i=0; i<n; i++){
        for (int j=0;j<n;j++) {
            int temp;
            scanf("%d", &temp);
            chess[0][i][j] = (temp == 1);
        }
    }
}





int main()
{

}