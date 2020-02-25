#include <stdio.h>

void __attribute__((weak)) f(void)
{
    printf("2nd weak f from %s\n", __FILE__);

}
