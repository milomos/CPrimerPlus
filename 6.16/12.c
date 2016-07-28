#include <stdio.h>

int main(void)
{
  int integer[9];
  int count;
  integer[0] = 1;
  for(count = 1; count <= 8; count++)
  {
    integer[count] = 2 * integer[count - 1] ;
    //printf("%4d", integer[count]);
  }
  count = 1;
  do {
    printf("%4d", integer[count]);
  } while(count++ < 8);
}
