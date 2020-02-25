objects:=*.out *.o *.so *.i *.s *.a lib*
GCCFLAG:=-Wall -W -o2
PICFLAG:=-fPIC -c
MCMODFLAG:= -mcmodel=large -c
LINKERFLAG:=-shared
VISIBILITY_FLAGS:=-fvisibility=hidden -fvisibility-inlines-hidden

libsimple: simple.o
	gcc -shared simple.o -Wl,--version-script,simpleVersionScript.map -o libsimple.so.1.0.0
simple.o: simple.c
	gcc -Wall -g -O0 -fPIC -c simple.c
firstDempApp: main.o
	gcc main.o -Wl,-L./ -lsimple \
			   -Wl,-R./ -o firstDempApp.out
newerApp: main.o
	gcc main.o -Wl,-L./ -lsimple \
			   -Wl,-R./ -o newerApp.out
ver2PeerApp: main.o
	gcc main.o -Wl,-L./ -lsimple \
			   -Wl,-R./ -o ver2PeerApp.out
main.o: main.c
	gcc -g -O0 -c -I./ main.c




.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
