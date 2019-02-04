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
	$(CC) -c -o main.o main.cpp

util.o: util.cpp
	$(CC) -c -o util.o util.cpp

hello: main.o util.o
	$(CC) -o hello main.o util.o