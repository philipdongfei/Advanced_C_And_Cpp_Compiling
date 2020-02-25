#include <stdio.h>
int __attribute__((weak)) x = 1;
int __attribute__((weak)) y = 1;
int main(void)
{
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
