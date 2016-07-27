#include <stdio.h>
void flt3(float n);
int main(void)
{
  float n;
  printf("请输入浮点数:");
  scanf("%f", &n);
  flt3(n);
  return 0;
}
void flt3(float n)
{
  int sum = n * n * n;
  printf("该数的立方值为:%2d", sum);
}
