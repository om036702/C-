/*
代入演算子
*/
#include <stdio.h>

int main(void)
{
  int a = 3;
  int b = 5;
  int c;
  
  a += 2;
  printf("a += 2 : %d\n", a);

  b -= 3;
  printf("b -= 3 : %d\n", b);

  a *= 4;
  printf("a *= 4 : %d\n", a);

  a /= 2;
  printf("a /= 2 : %d\n", a);

  a %= 7;
  printf("a %%= 7 : %d\n", a);

  return 0;
}
