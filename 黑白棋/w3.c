#include <stdio.h>
#include <math.h>
#define CHESSSIZE 8

int x, y;
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


void print_color(int x_cell, int y_cell)
{
  if (chess[x_cell][y_cell] == 0)
  {
    printf("空白\n");
  }
  else if (chess[x_cell][y_cell] == 1)
  {
    printf("黑色\n");
  }
  else if (chess[x_cell][y_cell] == 2)
  {
    printf("白色\n");
  }
}


void SearchAndPrint(int x_cell, int y_cell)
{
  int x_change = x_cell;
  int y_change = y_cell;
  int not = 0;
  for(int i = -1 ; i <= 1 ; i++ ){
    for(int j = -1 ; j <= 1 ; j++){
      while(x_change < 8, x_change >= 0){
        x_change = x_change + j;
        int sum = 0;
        sum += 1;

        if(i != 0 || j == 0){
          break;
        }
        else if(chess[y_change][x_change] == 0){
          break;
        }
        else if(chess[y_change][x_change] == color && sum < 2){
          break;
        }
        else if(chess[y_change][x_change] == color && sum >= 2){
          printf("(%d,%d)能下 color=%d 的子\n", x_cell, y_cell, color);
          not += 1;
          break;
        }
      }

      while(y_change < 8, y_change >= 0){
        y_change = y_change + i;
        int sum = 0;
        sum += 1;

        if(i == 0 || j != 0){
          break;
        }
        else if(chess[y_change][x_change] == 0){
          break;
        }
        else if(chess[y_change][x_change] == color && sum < 2){
          break;
        }
        else if(chess[y_change][x_change] == color && sum >= 2){
          printf("(%d,%d)能下 color=%d 的子\n", x_cell, y_cell, color);
          not += 1;
          break;
        }
      }

      while(x_change < 8, x_change >= 0, y_change < 8, y_change >= 0){
        x_change = x_change + j;
        y_change = y_change + i;

        int sum = 0;
        sum += 1;

        if(i == 0 || j == 0){
          break;
        }
        else if(chess[y_change][x_change] == 0){
          break;
        }
        else if(chess[y_change][x_change] == color && sum < 2){
          break;
        }
        else if(chess[y_change][x_change] == color && sum >= 2){
          printf("(%d,%d)能下 color=%d 的子\n", x_cell, y_cell, color);
          not += 1;
          break;
        }
      }
    }
  }
  if(not == 0){
    printf("(%d,%d)不能下 color=%d 的子\n", x_cell, y_cell, color);
  }
}

int main()
{
  inputArray(8);
  while (scanf("%d %d", &x, &y) != EOF)
  {
    scanf("%d", &color);

    print_color(x,y);
    
    if (!(chess[x][y] == 0))
    {
      printf("(%d,%d)不能下 color=%d的子\n", x, y, color);
      continue;;
    }

    SearchAndPrint(x, y);
  }
}
