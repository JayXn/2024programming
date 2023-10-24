#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
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

void search(int x_cell, int y_cell)
{
  for (int j = x_cell + 1; j < 8; j++)  //右
  {
    if (chess[y_cell][j] == 0)
    {
      break;
    }
    else if (chess[y_cell][j] == color && j - x_cell > 1){
      printf("(%d,%d)能下 %d 的子\n", x_cell, y_cell, color);
    }

  }
 
  for (int j = x_cell - 1; j > 0; j--)  //左
  {
    if (chess[y_cell][j] == 0)
    {
      break;
    }
    else if (chess[y_cell][j] == color && x_cell - j > 1){
      printf("(%d,%d)能下 %d 的子\n", x_cell, y_cell, color);
    }

  }

  for (int j = y_cell + 1; j < 8; j++)  //上
  {
    if (chess[y_cell][j] == 0)
    {
      break;
    }
    else if (chess[y_cell][j] == color && j - x_cell > 1){
      printf("(%d,%d)能下 %d 的子\n", x_cell, y_cell, color);
    }

  }

  for (int j = y_cell - 1; j < 8; j++)  //下
  {
    if (chess[y_cell][j] == 0)
    {
      break;
    }
    else if (chess[y_cell][j] == color && j - x_cell > 1){
      printf("(%d,%d)能下 %d 的子\n", x_cell, y_cell, color);
    }

  }

  for (int j = x_cell + 1; j < 8; j++)  //右上
  {
    if (chess[y_cell][j] == 0)
    {
      break;
    }
    else if (chess[y_cell][j] == color && j - x_cell > 1){
      printf("(%d,%d)能下 %d 的子\n", x_cell, y_cell, color);
    }

  }

  for (int j = x_cell + 1; j < 8; j++)  //右下
  {
    if (chess[y_cell][j] == 0)
    {
      break;
    }
    else if (chess[y_cell][j] == color && j - x_cell > 1){
      printf("(%d,%d)能下 %d 的子\n", x_cell, y_cell, color);
    }

  }

  for (int j = x_cell + 1; j < 8; j++)  //左上
  {
    if (chess[y_cell][j] == 0)
    {
      break;
    }
    else if (chess[y_cell][j] == color && j - x_cell > 1){
      printf("(%d,%d)能下 %d 的子\n", x_cell, y_cell, color);
    }

  }

  for (int j = x_cell + 1; j < 8; j++)  //左下
  {
    if (chess[y_cell][j] == 0)
    {
      break;
    }
    else if (chess[y_cell][j] == color && j - x_cell > 1){
      printf("(%d,%d)能下 %d 的子\n", x_cell, y_cell, color);
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
