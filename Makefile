.PHONY: clean prepare

bin/qwrt: prepare obj/lab2.o obj/qwrt.o
	gcc -o bin/qwrt obj/lab2.o obj/qwrt.o -lm

obj/lab2.o: prepare
	gcc -c src/lab2.c -o obj/lab2.o

obj/qwrt.o: prepare
	gcc -c src/qwrt.c -o obj/qwrt.o

clean:
	rm -rf bin/* obj/*

prepare: bin obj

bin:
	mkdir bin

obj:
	mkdir obj