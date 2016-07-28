#include <stdio.h>
int main(void)
{
  const int ROW = 5;
  int row, i;
  char ch = '$';
  for(row = 0; row < ROW; row++)
{
    for(i = 0; i <= row;i++)
      printf("%c", ch);
    printf("\n");
  }
  return 0;
}
