TARGET = hello
PREFIX = /usr/local/bin

.PHONY: all clean install uninstall

all: $(TARGET)

clean:
	rm -rfv $(TARGET) *.o

install:
	install -v $(TARGET) $(PREFIX)

uninstall:
	rm -rfv $(PREFIX)/$(TARGET)

main.o: main.cpp
	g++ -c -o main.o main.cpp

util.o: util.cpp
	g++ -c -o util.o util.cpp

hello: main.o util.o
	g++ -o hello main.o util.o