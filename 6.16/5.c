#include <stdio.h>
int main(void)
{
  int max, min;
  printf("请输入下限与上限:");
  scanf("%d%d", &min, &max);
  for(;min <= max;min++)
  printf("%3d%4d%5d\n", min, min * min, min * min *min);
  return 0;
}
