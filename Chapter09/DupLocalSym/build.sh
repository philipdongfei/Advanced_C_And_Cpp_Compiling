gcc -Wall -g -O0 -c staticlib1.c
ar -rcs libfirst.a staticlib1.o
gcc -Wall -g -O0 -c staticlib2.c
ar -rcs libsecond.a staticlib2.o
gcc -Wall -g -O0 -I./ -I./ -c main.c
gcc main.o -L./ -lfirst -L./ -lsecond -o clientApp.out

