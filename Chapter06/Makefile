objects:=*.out *.o *.so *.i *.s
GCCFLAG:=-Wall -W -o2
PICFLAG:=-fPIC -c
MCMODFLAG:= -mcmodel=large -c
LINKERFLAG:=-shared

LibAdd: first.o
	gcc ${LINKERFLAG} first.o -o libaddlib.so
first.o: first.c
	gcc ${MCMODFLAG} first.c




.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
