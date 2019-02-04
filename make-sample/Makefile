PREFIX = /usr/local/bin
TARGET = hello
UTIL_OBJ=util.o
MAIN_OBJ=main.o

.PHONY: all clean install uninstall

all: $(TARGET)

clean:
	rm -rfv $(TARGET) *.o

install:
	install -v $(TARGET) $(PREFIX)

uninstall:
	rm -rfv $(PREFIX)/$(TARGET)

main.o: main.cpp
	g++ -c -o $@ main.cpp

util.o: util.cpp
	g++ -c -o $@ util.cpp

hello: $(MAIN_OBJ) $(UTIL_OBJ)
	g++ -o $@ $(MAIN_OBJ) $(UTIL_OBJ)