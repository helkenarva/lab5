.PHONY: clean

bin/qwrt: obj/lab2.o obj/qwrt.o
	gcc -o bin/qwrt obj/lab2.o obj/qwrt.o -lm

obj/lab2.o:
	gcc -c src/lab2.c -o obj/lab2.o

obj/qwrt.o:
	gcc -c src/qwrt.c -o obj/qwrt.o

clean:
	rm -rf bin/* obj/*