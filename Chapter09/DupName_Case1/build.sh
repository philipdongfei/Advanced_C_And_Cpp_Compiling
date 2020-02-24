gcc -Wall -g -O0 -c staticlib.c
ar -rcs libstaticlib.a staticlib.o
gcc -Wall -g -O0 -I./ -c shlib.c
gcc -shared shlib.o -Wl,-soname,libshlib.so.1 -o libshlib.so.1.0.0
sudo ldconfig -n .
ln -s libshlib.so.1 libshlib.so

