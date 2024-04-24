#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    // 乱数の種を変更
    srand(100);
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", rand());
    }
    return 0;
}
