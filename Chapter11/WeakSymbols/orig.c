#include <stdio.h>

void __attribute__((weak)) f()
{
    printf("original f..\n");
}
int main(void)
{
    f();
    return 0;
}

