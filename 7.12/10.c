#include <stdio.h>

int main(void)
{
  int dollar, choices;
  float taxes = 0.15;
  float mtaxes = 0.28;
  float sum;
  printf("请输入应征税收入:");
  scanf("%d", &dollar);
  printf("\n请输入种类:\n");
  printf("1)单身  2)户主\n");
  printf("3)已婚共有   4)已婚离异\n");
  printf("5)退出\n");
  while(scanf("%d", &choices) == 1 && choices != 5)
  {
    switch (choices) {
      case 1:sum = 17850;break;
      case 2:sum = 23900;break;
      case 3:sum = 29750;break;
      case 4:sum = 14875;break;
    }
    printf("应缴税金:%.2f\n", taxes * sum + mtaxes * (dollar - sum));
    printf("请继续输入应征税收入:");
    scanf("%d", &dollar);
    printf("\n请继续输入种类:\n");
    printf("1)单身  2)户主\n");
    printf("3)已婚共有   4)已婚离异\n");
    printf("5)退出\n");
  }
  return 0;
 }
