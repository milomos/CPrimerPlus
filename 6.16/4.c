#include <stdio.h>
int main(void)
{
  const int ROW = 5;
  char ch, c;
  int row, j, k, l;
  printf("输入字母:");
  scanf("%c", &ch);
  for(row = 0; row < ROW; row++)
  {
    for(j = ROW; j > row; j--)
      printf("%c", ' ');
      for(k = 0;k <= row;k++)
        printf("%c", 'A'+ k);
        for(l = row - 1; l >= 0;l--)
          printf("%c", 'A' + l);
        printf("\n");
  }
  return 0;
}
