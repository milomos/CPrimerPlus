#include <stdio.h>
//#define base 10.00
#define d 0.15
#define d1 0.20
#define d2 0.25

int main(void)
{
  int choice, hour;
  float dollor, j, temp;
  temp = dollor = j = 0;
  printf("*****************************************************************\n");
  printf("Enter the number corresponding to the derired pay rate or action:\n");
  printf("1) $8.75/hr                     2) $9.33/hr\n");
  printf("3) $10.00/hr                    4) $11.20/hr\n");
  printf("5)quit\n");
  printf("*****************************************************************\n");
  while(scanf("%d", &choice) == 1 && choice != 5)
  {
    switch (choice) {
      case 1:
        printf("输入工作小时数:");
          scanf("%d", &hour);
            temp = 8.75;
      break;
      case 2:
        printf("输入工作小时数:");
          scanf("%d", &hour);
            temp = 9.33;
      break;
      case 3:
        printf("输入工作小时数:");
          scanf("%d", &hour);
            temp = 10.00;
      break;
      case 4:
        printf("输入工作小时数:");
          scanf("%d", &hour);
              temp = 11.20;
      break;
      //case 5:continue;
    }
  if(choice < 1 || choice > 5)
  {
    printf("输入错误，请输入1至5的数字.\n");
    continue;
  }
    if(hour > 40)
      dollor = (((hour - 40) * 1.5) * temp) + ((hour - 40) * temp);
    else
        dollor = hour * temp;

    if(dollor <= 300)
          j = dollor * d;
    else if(dollor > 300 && dollor <= 450)
            j = (300 * d) + (450 - dollor) * d1;
        else
              j = (300 * d) + (150 * d1) + (dollor - 450) * d2;
    printf("工资总额:%3.2f, 税金:%.2f, 净工资:%.2f\n", dollor, j, dollor - j);
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the derired pay rate or action:\n");
    printf("1) $8.75/hr                     2) $9.33/hr\n");
    printf("3) $10.00/hr                    4) $11.20/hr\n");
    printf("5)quit\n");
    printf("*****************************************************************\n");

  }
  return 0;
}
