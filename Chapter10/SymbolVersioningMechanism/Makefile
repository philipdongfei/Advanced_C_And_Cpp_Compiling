objects:=*.out *.o *.so *.i *.s *.a lib*
GCCFLAG:=-Wall -W -o2
PICFLAG:=-fPIC -c
MCMODFLAG:= -mcmodel=large -c
LINKERFLAG:=-shared
VISIBILITY_FLAGS:=-fvisibility=hidden -fvisibility-inlines-hidden

libsimple: simple.o
	gcc -shared simple.o -Wl,--version-script,simpleVersionScript.map -o libsimple.so.1.0.0
simple.o: simple.c
	gcc -fPIC -c simple.c



.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
