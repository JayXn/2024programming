#include <stdio.h>
#include <math.h>
#define CHESSSIZE 8

int x, y, dx, dy;
int color;
int chess[CHESSSIZE][CHESSSIZE];

void inputArray(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int piece;
      scanf("%d", &piece);
      chess[i][j] = piece;
    }
  }
}



int Search(int x_cell, int y_cell)
{
  int x = x_cell;
  int y = y_cell;

  for(int dy = -1 ; dy <= 1 ; dy++ ){
    for(int dx = -1 ; dx <= 1 ; dx++){
      if(color != chess[y + dy][x + dx] && chess[y + dy][x + dx] != 0){
        x = x + dx;
        y = y + dy;        
        while(IN_CHESS(x,y)){
          x = x + dx;
          y = y + dy;
          if(chess[x][y] == color){
            return 1;
          }
        }
      }
    }
  }
  return 0;
}





int main()
{


  while (1)
  {
    inputArray(CHESSSIZE);

    scanf("%d %d", &x, &y);

    Search(x,y);

    if(Search(x,y) == 0){
      printf("(%d,%d)能下 color=%d 的值\n",x,y,color); 
    }
    else{
      printf("(%d,%d)不能下 color=%d 的值\n",x,y,color); 
    }
  }
}
