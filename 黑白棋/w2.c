#include <stdio.h>
#include <math.h>
#define CHESSSIZE 8

int x, y;
int color;
int chess[CHESSSIZE][CHESSSIZE];

void print_color(int x_cell, int y_cell)
{
  if (chess[x_cell][y_cell] == 0)
  {
    printf("空白");
  }
  else if (chess[x_cell][y_cell] == 1)
  {
    printf("黑色");
  }
  else if (chess[x_cell][y_cell] == 2)
  {
    printf("白色");
  }
}

void inputArray()
{
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      int piece;
      scanf("%d", &piece);
      chess[i][j] = piece;
    }
  }
}

void search_print(int x_cell, int y_cell)
{
  for(int dy = -1 ; dy <= 1 ; dy++ ){
    for(int dx = -1 ; dx <= 1 ; dx++){
      for(int x_point = dx ; x_point < 8, x_point > -8 ; x_point += dx){
        if(chess[y_cell][x_cell + x_point] == 0){
          continue;
        }
        else if(chess[y_cell][x_cell + x_point] == color && abs(x_point) > 2)
          printf("(%d,%d)能下 %d 的子", x_cell + x_point, y_cell, color);
      }
    }
  }
}

int main()
{
  while (1)
  {
    inputArray();
    scanf("%d %d", &x, &y);
    scanf("%d", &color);

    print_color(x,y);
    if (!(chess[x][y] == 0))
    {
      break;
    }

    search_print(x, y);
  }

  return 0;
}
