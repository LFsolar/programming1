a.out: addressMain.o 
	g++ -g addressMain.o

addressMain.o: Address.cpp Address.h
	g++ -g -c addressMain.cpp

clean: 
	rm *.o a.out
