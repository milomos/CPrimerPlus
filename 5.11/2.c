#include <stdio.h>
int main(void)
{
  int num, i;
  i = 0;
  printf("请输入整数:");
  scanf("%d", &num);
  while(i++ < 10)
    printf("%2d", num++);
  printf("\ndone");
  return 0;
}
