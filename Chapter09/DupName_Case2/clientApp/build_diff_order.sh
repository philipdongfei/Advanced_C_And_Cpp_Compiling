gcc -Wall -g -O0 -I../libFirst -I../libSecond -c main_differentOrderOfCalls.c
gcc main_differentOrderOfCalls.o -Wl,-L../libFirst -Wl,-lfirst    \
           -Wl,-L../libSecond -Wl,-lsecond  \
           -Wl,-R../libFirst                \
           -Wl,-R../libSecond               \
           -o clientApp_diffOrder.out

