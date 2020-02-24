gcc -Wall -g -O0 -I../libFirst -I../libSecond -c main.c
gcc main.o -Wl,-L../libSecond -lsecond    \
           -Wl,-L../libFirst -lfirst      \
           -Wl,-R../libFirst              \
           -Wl,-R../libSecond             \
           -o clientAppDifferentLinkingOrder.out

