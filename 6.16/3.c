#include <stdio.h>
int main(void)
{
  char ch;
  int row;
  for(row = 0;row < 6;row++)
  {
    for(ch = 'F';ch >= 'F' - row;ch--)
      printf("%c", ch);
    printf("\n");
  }
  return 0;
}
