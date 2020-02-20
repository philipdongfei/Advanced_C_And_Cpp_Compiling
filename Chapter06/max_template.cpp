#include "max_template.h"

int main()
{
    int a = 1;
    int b = 2;
    int c;
    c = max(a, b); // Compiler automatically figures out that max<int>(int, int) is needed
    double x = 1.1;
    float y = 2.2;
    double z;
    z = max<double>(x, y); // Compiler can't resolve, so force use of max(double, double)
    return 0;
}
