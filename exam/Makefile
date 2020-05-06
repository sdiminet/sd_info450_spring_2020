output: main.o account.o checking.o savings.o creditcard.o
	g++ main.o account.o checking.o savings.o creditcard.o -o output

main.o: main.cpp
	g++ -c main.cpp

account.o: account.cpp account.h
	g++ -c account.cpp

checking.o: checking.cpp checking.h
	g++ -c checking.cpp

savings.o: savings.cpp savings.h
	g++ -c savings.cpp

creditcard.o: creditcard.cpp creditcard.h
	g++ -c creditcard.cpp

clean:
	rm *.o output
