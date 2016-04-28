CXX = g++ -std=c++11
CFLAGS = `pkg-config opencv --cflags --libs`
PRG = Detect

build: build/$(PRG).o

build/$(PRG).o: $(PRG).cpp 
	$(CXX) -o $(PRG).o $(PRG).cpp $(CFLAGS)

launch:
	./$(PRG).o

.PHONY: clean

clean:
	rm -rf *.o
