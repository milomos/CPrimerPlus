#include <stdio.h>
int main(void)
{
  char ch[26];
  ch[0] = 'a';
  int i;
  for(i = 0;i < 26;i++)
    printf("%2c", ch[0] + i);
}
