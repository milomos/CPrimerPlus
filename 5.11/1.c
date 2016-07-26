#include <stdio.h>
#define time 60
int main(void)
{
  int sec;
  printf("输入分钟:");
  scanf("%d", &sec);
  while(sec > 0)
  {
    printf("等于%d小时和%d分钟\n", sec / time, sec % time);
    printf("输入下一分钟:");
    scanf("%d", &sec);
  }
  printf("Done!\n");
  return 0;
}
