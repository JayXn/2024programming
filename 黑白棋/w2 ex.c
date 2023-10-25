#include <stdio.h>
#define IN_CHESS(x,y) (x >= 0 && x <= 7 && y >= 0 && y <= 7)    //巨集

int chess[8][8] = {
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,1,2,0,0,0,},
  {0,0,0,2,1,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,},
  {0,0,0,0,0,0,0,0,}
};

int main(){
  
  int dx, dy;
  int i, j;
  int color;

  color = 1;
  i=2;
  j=4;
  dx=1;
  dy=0;

  int check(int chess[8][8], int i, int j, int dx, int dy, int color);
  int an_color = 3 - color;    //另一個顏色
  //int an_color = color ^ 3;  //用二進位判斷，color XOR 0011

  //# step 1. 可不可能可以下
  int x = i + dx;
  int y = j;

  if (IN_CHESS(x,y)){
    if(chess[x][y] != 2){
      printf("%d,%d not free for color=%d\n", i,j,color);
      return;
    }
  }else{
    printf("%d,%d not free for color=%d\n", i,j,color);
    return;
  }

  //chess[x][y] == 2 如果程式跑到這裡代表 chess不是0或1

  //# step 2. 完成八個方向
  x = x + dx;
  y = y + dy;
  while(IN_CHESS(x,y)){
    if(chess[x][y] == 0){
      printf("%d,%d not free for color=%d\n", i,j,color);
      break;
    }
    if(chess[x][y] == an_color){
      printf("%d,%d free for color=%d\n", i,j,color);
      break;
    }
    x = x + dx;
    y = y + dy;

  }



}
