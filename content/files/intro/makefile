all:HelloWorld.o MyClass.o
	g++ HelloWorld.o MyClass.o -o lab1

HelloWorld.o:HelloWorld.cpp MyClass.h
	g++ -c HelloWorld.cpp

MyClass.o:MyClass.h MyClass.cpp
	g++ -c MyClass.cpp
clean:
	rm -f *.o *~ lab1
tar: clean
	cd ..;tar cf ./jvalland_lab1.tar ./jvalland_lab1