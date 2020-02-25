objects:=*.out *.o *.so *.i *.s *.a
GCCFLAG:=-Wall -W -o2
PICFLAG:=-fPIC -c
MCMODFLAG:= -mcmodel=large -c
LINKERFLAG:=-shared
VISIBILITY_FLAGS:=-fvisibility=hidden -fvisibility-inlines-hidden

libexecutablesharedlib: executableSharedLib.o
	g++ -shared -Wl,-e,main ./executableSharedLib.o -pthread -lm -ldl -o libexecutablesharedlib.so
executableSharedLib.o: executableSharedLib.c
	g++ -Wall -O0 -fPIC -I./ -c executableSharedLib.c -o executableSharedLib.o
demoApp: main.o
	g++ main.o -lpthread -lm -ldl -L./ -lexecutablesharedlib -Wl,-Bdynamic -Wl,-R./ -o demoApp.out
main.o: main.c
	g++ -Wall -O2 -I./ -c main.c -o main.o



.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
