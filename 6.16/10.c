#include <stdio.h>
int main(void)
{
  int integer[8];
  int count;
  for(count = 0; count < 8; count++)
    scanf("%d", &integer[count]);
  for(count = 7; count >= 0; count--)
      printf("%2d", integer[count]);
}
