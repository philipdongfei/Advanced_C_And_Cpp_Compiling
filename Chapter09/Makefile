objects:=*.out *.o *.so *.i *.s *.a
GCCFLAG:=-Wall -W -o2
PICFLAG:=-fPIC -c
MCMODFLAG:= -mcmodel=large -c
LINKERFLAG:=-shared
VISIBILITY_FLAGS:=-fvisibility=hidden -fvisibility-inlines-hidden

staticlib:staticlib.c
	gcc -Wall -g -O0 -c staticlib.c
	ar -rcs libfirst.a staticlib.o
staticlib2:staticlib2.c
	gcc -Wall -g -O0 -c staticlib2.c
	ar -rcs libsecond.a staticlib2.o
duplib: main_lib.c
	gcc -Wall -g -O0 -I./ -I./ -c main_lib.c
	gcc main_lib.o -L./ -lfirst -L./ -lsecond -o main_libApp.out


.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
