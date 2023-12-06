#include <stdio.h>

int main() {
    int SizeA, SizeB, num;
    scanf("%d %d %d", &SizeA, &SizeB, &num);
    int matrix[SizeA][SizeB];
    for(int i = 0 ; i < SizeA ; i++)
        for(int j = 0 ; j < SizeB ; j++)
            matrix[i][j] = 0;

    while(num > 0){
        int x, y, value;
        scanf("%d %d %d", &y, &x, &value);

        matrix[y][x] = value;

        num--;
    }


    for(int i = 0 ; i < SizeA ; i++){
        for(int j = 0 ; j < SizeB ; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
