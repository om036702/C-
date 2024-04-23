/*
--------------------------------------------------
5.演算子
--------------------------------------------------
*/

#include <stdio.h>
int main(void)
{
  int a = 3;
  int b = 5;
  int c;
  
  c = a + b;
  printf("a + b = %d\n", c);

  c = a - b;
  printf("a - b = %d\n", c);

  c = a * b;
  printf("a * b = %d\n", c);

  c = b / a;
  printf("b / a  = %d\n", c);

  c = b % a;
  printf("b %% a  = %d\n", c);

  double d;
  d = 3 / 2;
  printf("1) d = %f\n", d);

  d = 3.0 / 2;
  printf("2) d = %f\n", d);

  return 0;
}
