objects:=*.out *.o *.so *.i *.s *.a
GCCFLAG:=-Wall -W -o2
PICFLAG:=-fPIC -c
MCMODFLAG:= -mcmodel=large -c
LINKERFLAG:=-shared
VISIBILITY_FLAGS:=-fvisibility=hidden -fvisibility-inlines-hidden


libso: controlledvisibility.cpp
	g++ -shared controlledvisibility.cpp -Wl,-soname, libcontrolledvisibility.so.1 -o libcontrolledvisibility.so.1.0.0
main: LoadLib.o
	g++ LoadLib.o -L./ -lcontrolledvisibility -o main.o -ldl -Wl,-R./ 
LoadLib.o: LoadLib.cpp
	g++ -c LoadLib.cpp
LibControlledVisibility: controlledvisibility.o
	g++ ${LINKERFLAG} controlledvisibility.o -o libcontrolledvisibility.so
controlledvisibility.o: controlledvisibility.cpp
	g++ ${PICFLAG} ${VISIBILITY_FLAGS} controlledvisibility.cpp 


.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
