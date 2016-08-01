#include <stdio.h>
#define c 'ei'
int main(void)
{
  int count = 0;
  char ch;
  while((ch = getchar()) != '#')
    if(ch == 'e')
    {
      ch = getchar();
        if(ch == 'i')
          count++;
    }
  printf("%d", count);
  return 0;
}
