#include <stdio.h>
int main(void)
{
  int count, sum, days;
  count = sum = 0;
  printf("多少天:");
  scanf("%d", &days);
  while(count++ < days)
  {
    sum = count * count;
    printf("第%2d天得到$%3d\n", count, sum);
  }
  return 0;
}
