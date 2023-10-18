example:
	g++ example.cpp main.cpp -o example.out && ./example.out

debug:
	g++ -g example.cpp main.cpp -o example-debug.out

clean:
	rm -rf *.out	