#include <stdio.h>
float sum(float a, float b);
int main(void)
{
  float a, b;
  printf("输入两个浮点数:");
  while(scanf("%f%f", &a, &b) == 2)
  {
    printf("值:%f\n", sum(a, b));
    printf("再次输入:");
  }
  return 0;
}
float sum(float a, float b)
{
  float s;
  s = (a - b) / (a * b);
  return s;
}
