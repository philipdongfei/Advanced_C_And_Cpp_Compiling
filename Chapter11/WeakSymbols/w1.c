#include <stdio.h>

void __attribute__((weak)) f(void)
{
    printf("1st weak f from %s\n", __FILE__);

}

