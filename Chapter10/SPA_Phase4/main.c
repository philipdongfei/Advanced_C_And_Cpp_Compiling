#include <stdio.h>
#include "simple.h"

int main(int argc, char* argv[])
{
    int nFirst = first_function(1, 10);     // seeing 100 times larger return value will be fun!
    int nSecond = second_function(2);
    int nFourth = fourth_function(4);
    int nRetValue = nFirst + nSecond + nFourth;
    printf("first(1) + second(2) + fourth(4) = %d\n", nRetValue);
    return nRetValue;
}


