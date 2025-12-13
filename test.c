#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    printf("請輸入資料筆數：");
    scanf("%d", &n);

    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("記憶體分配失敗\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 1000; // 隨機生成 0 到 999 的整數
    }

    printf("排序前的陣列：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // QuickSort(array, 0, n - 1); // Uncomment this line to call the QuickSort function

    printf("排序後的陣列：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
  return 0;
}