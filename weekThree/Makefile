all : greet2
greet2: _2_funcDefi.o _2_helloWorld.o
	gcc -o greet2 _2_funcDefi.o _2_helloWorld.o
_2_funcDefi.o: _2_funcDefi.c
	gcc -c _2_funcDefi.c
_2_helloWorld.o: _2_helloWorld.c
	gcc -c _2_helloWorld.c
clean:
	rm greet2 *.o
