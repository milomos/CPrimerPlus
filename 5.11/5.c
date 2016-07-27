#include <stdio.h>
int main(void)
{
  int sum, count, days;
  count = 0;
  sum = 0;
  printf("多少天:");
  scanf("%d", &days);
  while(count++ < days)
  {
    sum = sum + count;
    printf("第%2d天得到$%3d", count, sum);
    printf("\n");
  }
  return 0;
}
