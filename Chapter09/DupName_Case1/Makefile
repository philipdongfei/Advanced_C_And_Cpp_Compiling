objects:=*.out *.o *.so *.i *.s *.a
GCCFLAG:=-Wall -W -o2
PICFLAG:=-fPIC -c
MCMODFLAG:= -mcmodel=large -c
LINKERFLAG:=-shared
VISIBILITY_FLAGS:=-fvisibility=hidden -fvisibility-inlines-hidden


clientAppDiffLinkingOrder: main.o
	gcc main.o -Wl,-L./  -lshlib	\
			   -Wl,-L./  -lstaticlib\
			   -Wl,-R./				\
			   -o clientAppDifferentLinkingOrder.out

clientApp: main.o
	gcc main.o -Wl,-L./ -lstaticlib \
			   -Wl,-L./ -lshlib		\
			   -Wl,-R./				\
			   -o clientApp.out
main.o: main.c
	gcc -Wall -g -O0 -I./ -I./ -c main.c


.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
