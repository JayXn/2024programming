#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int* numbers;
    int length = 0;

    while(1){
        int input;
        scanf("%d", &input);
        if(input == 0) break;

        int* larger = malloc(sizeof(int) * (length + 1));

        for(int i = 0 ; i < length ; i++) larger[i] = numbers[i];
        



        length++;
    }
    
    
    return 0;
}

