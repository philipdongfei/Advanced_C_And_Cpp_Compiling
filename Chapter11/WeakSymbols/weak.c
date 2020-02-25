void __attribute__((weak)) f();
int main(void)
{
    if (f)
        f();
    return 0;
}
