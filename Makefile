dequeaslistdriver: deque.cpp deque.h dequeaslisttest.cpp
	g++ -std=c++11 deque.cpp dequeaslisttest.cpp -o dequeaslistdriver

run:
	./dequeaslistdriver <test01.in> file01.out
	./dequeaslistdriver <test02.in> file02.out
	./dequeaslistdriver <test03.in> file03.out
	./dequeaslistdriver <test04.in> file04.out
clean:
	rm dequeaslistdriver
	rm file01.out
	rm file02.out
	rm file03.out
	rm file04.out	
	