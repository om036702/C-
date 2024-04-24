#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        //  乱数値の表示
        printf("%d\n", rand());
    }
    return 0;
}
