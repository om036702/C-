/*
--------------------------------------------------
 chap03   code0312.c
--------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>   /* この行も忘れずに */

typedef char String[1024];

int main(void)
{
  String age = "29";
  int n = atoi(age);
  printf("あなたは来年%d歳になります。\n", n + 1);
  return 0;
}

/*
--------------------------------------------------
 chap03   code0313.c
--------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int r = rand() % 100;
  printf("あなたはたぶん、%d歳ですね？\n", r);
  return 0;
}

/*
--------------------------------------------------
 chap03   code0314.c
--------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(NULL));
  int r = rand() % 100;
  printf("あなたはたぶん、%d歳ですね？\n", r);
  return 0;
}

/*
--------------------------------------------------
 chap03   code0315.c
--------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>   // atoiのために必要

typedef char String[1024];

int main(void)
{
  String name;
  printf("あなたの名前を入力してください。\n");
  scanf("%s", name);

  String ageStr;
  printf("あなたの年齢を入力してください。\n");
  scanf("%s", ageStr);

  int age = atoi(ageStr);
  printf("ようこそ、%d歳の%sさん。\n", age, name);
  return 0;
}
