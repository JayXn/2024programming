

//==================針對資料結構的所有操作===================//
#include "magic.h"
    
int isEmpty(stack_t *stackPtr){
    if(stackPtr -> top == -1) return 1;
    return 0;
}


int isFull(stack_t *stackPtr){    //傳指標增加讀取速度
    if(stackPtr -> top == -1) return 1;
    return 0;
}


void push(stack_t *stackPtr , axis_t element){
    //應該要檢查是否有overflow

    stackPtr -> top++;
    stackPtr -> elements[stackPtr -> top] = element;
}


axis_t pop(stack_t *stackPtr){
    axis_t temp = {-1,-1};
    if (isEmpty(stackPtr)) return temp;
    return stackPtr -> elements[stackPtr -> top--];
}


