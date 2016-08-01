#include <stdio.h>
#define base 10.00
#define d 0.15
#define d1 0.20
#define d2 0.25
int main(void)
{
  int hour;
  float dollor, j;
  dollor = j = 0;
  printf("输入周工作小时数:");
  scanf("%d", &hour);
  if(hour > 40)
    dollor = (((hour - 40) * 1.5) * 10.00) + ((hour - 40) * 10.00);
  else
      dollor = hour * 10.00;

  if(dollor <= 300)
        j = dollor * d;
  else if(dollor > 300 && dollor <= 450)
          j = (300 * d) + (450 - dollor) * d1;
      else
            j = (300 * d) + (150 * d1) + (dollor - 450) * d2;
  printf("工资总额:%3.2f, 税金:%.2f, 净工资:%.2f", dollor, j, dollor - j);
}
