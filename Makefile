all:main

main: build/src/computing.o
	gcc build/src/computing.o -o bin/main
build/src/computing.o:src/computing.c
	gcc -c src/computing.c -o build/src/computing.o
	
run:
	bin/./main

clean:
	rm -rf build/src/*.o 
	rm -rf bin/*
