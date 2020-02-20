objects:=*.out *.o *.so *.i *.s *.a
GCCFLAG:=-Wall -W -o2
PICFLAG:=-fPIC -c
MCMODFLAG:= -mcmodel=large -c
LINKERFLAG:=-shared
VISIBILITY_FLAGS:=-fvisibility=hidden -fvisibility-inlines-hidden


LibAdd: first.o
	gcc ${LINKERFLAG} first.o -o libaddlib.so
first.o: first.c
	gcc ${MCMODFLAG} first.c
LibDefaultVisibility: defaultvisibility.o
	g++ ${LINKERFLAG} defaultvisibility.o -o libdefaultvisibility.so
defaultvisibility.o: defaultvisibility.cpp
	g++ ${PICFLAG} ${VISIBILITY_FLAGS} defaultvisibility.cpp
LibControlledVisibility: controlledvisibility.o
	g++ ${LINKERFLAG} controlledvisibility.o -o libcontrolledvisibility.so
controlledvisibility.o: controlledvisibility.cpp
	g++ ${PICFLAG} ${VISIBILITY_FLAGS} controlledvisibility.cpp 
loadlib: LoadLib.cpp
	g++ -o LoadLib.out LoadLib.cpp -ldl





.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
