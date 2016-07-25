#include <stdio.h>
int main(void)
{
  float num = 21.3;
  float num1 = 21.29;
  printf("a. The input is %.1f or %.1e\n", num, num);
  printf("b. The input is %+.3f or %.3E", num, num);
  return 0;
}
