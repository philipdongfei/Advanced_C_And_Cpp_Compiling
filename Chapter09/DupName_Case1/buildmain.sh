gcc main.o -Wl,-L./ -lstaticlib \
           -Wl,-L./ -lshlib     \
           -Wl,-R./            \
           -o clientApp.out

