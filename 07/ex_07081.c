/*
--------------------------------------------------
演算子の優先順位
--------------------------------------------------
*/
#include <stdio.h>

int main(void)
{
  int result = 10 + 5 * 2; // 20
  printf("Result: %d\n", result);

  result = (10 + 5) * 2;   // 30
  printf("Result: %d\n", result);

  result = 10 / 2 + 3;     // 8
  printf("Result: %d\n", result);

  result = 10 / (2 + 3);   // 2
  printf("Result: %d\n", result);

  result = 10 % 3 * 2;     // 2
  printf("Result: %d\n", result);

  result = 10 * 3 % 2;     // 0
  printf("Result: %d\n", result);
  
  int a = 5;
  int b = 2 * ++a  / 4;
  printf("%d\n",b);

  printf("%d\n",a);

  a += 3 % 2 + 2;
  printf("%d\n",a);

  int i = 1 + 2 * 3;
  int j = (1 + 2) * 3;
  printf("i = %d, j = %d\n", i, j);

  c=b=a;
  printf("c, b, a = %d ,%d, %d\n",c, b, a);

  return 0;
}
