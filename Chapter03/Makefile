objects:=*.out *.o *.so *.i *.s
GCCFLAG:=-Wall -W -o2

Hello: main.cpp
	gcc main.cpp -o regularBuild.out
Hello_static: main.cpp
	gcc -static main.cpp -o staticBuild.out




.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
