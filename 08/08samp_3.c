#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i;
    //  time関数を使った乱数の種の設定
    srand((unsigned int)time(NULL));
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", rand());
    }
    return 0;
}
