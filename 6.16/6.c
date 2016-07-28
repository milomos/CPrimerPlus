#include <stdio.h>
#include <string.h>

int main(void)
{
  char ch[20], f;
  int c, i;
  printf("输入:");
  scanf("%s", ch);
  printf("输出:");
  for(c = strlen(ch);c >= 0;c--)
    printf("%c", ch[c]);
  printf("\n");

}
