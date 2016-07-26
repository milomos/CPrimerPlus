#include <stdio.h>
int main(void)
{
  int days;
  const int wk = 7;
  printf("请输入天数:");
  scanf("%d", &days);
  printf("%d days are %d weeks, %d days", days, days / wk, days % wk);
  return 0;
}
