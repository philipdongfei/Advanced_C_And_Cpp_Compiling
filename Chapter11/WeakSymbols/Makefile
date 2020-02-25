
err: err.c
	gcc err.c -o err.out
weak: weak.c
	gcc weak.c -o weak.out
fweak: weak.o f.o
	gcc -o weak.out weak.o f.o
f.o: f.c
	gcc -c f.c
weak.o: weak.c
	gcc -c weak.c
orig: orig.c
	gcc orig.c -o orig.out
ovrd: orig.o ovrd.o
	gcc -o ovrd.out orig.o ovrd.o
orig.o: orig.c
	gcc -c orig.c
ovrd.o: ovrd.c
	gcc -c ovrd.c
orig-obj: orig-obj.c
	gcc orig-obj.c -o orig-obj.out
ovrd-obj:orig-obj.o ovrd-obj.o
	gcc -o ovrd-obj.out orig-obj.o ovrd-obj.o
orig-obj.o: orig-obj.c
	gcc -c orig-obj.c
ovrd-obj.o: ovrd-obj.c
	gcc -c ovrd-obj.c
test1: mul.o s1.o s2.o
	gcc -o test1.out mul.o s1.o s2.o
test2: mul.o s1.o w1.o w2.o
	gcc -o test2.out mul.o w1.o w2.o
test3-1: mul.o w1.o w2.o
	gcc -o test3-1.out mul.o w1.o w2.o
test3-2: mul.o w2.o w1.o
	gcc -o test3-2.out mul.o w2.o w1.o
mul.o: mul.c
	gcc -c mul.c
s1.o: s1.c
	gcc -c s1.c
s2.o: s2.c
	gcc -c s2.c
w1.o: w1.c
	gcc -c w1.c
w2.o: w2.c
	gcc -c w2.c



