objects:=*.out *.o *.so *.i *.s
GCCFLAG:=-Wall -W -o2

preprocess: function.c
	gcc -E function.c -o function.i
compile_att: function.c
	gcc -S -masm=att function.c -o function_att.s
compile_intel: function.c
	gcc -S -masm=intel function.c -o function_intel.s
compile-assemble: function.c
	gcc -c function.c -o function.o
function: main.c function.c function.h 
	gcc -o function.out  main.c function.c




.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
