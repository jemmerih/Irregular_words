all:main

main:build/src/main.o build/src/computing.o
	gcc build/src/main.o build/src/computing.o -o bin/main
build/src/computing.o:src/computing.c
	gcc -c src/computing.c -o build/src/computing.o
build/src/main.o:src/main.c
	gcc -c src/main.c -o build/src/main.o
	
run:
	bin/./main

clean:
	rm -rf build/src/*.o 
	rm -rf bin/*
