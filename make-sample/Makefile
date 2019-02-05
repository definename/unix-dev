PREFIX=/usr/local/bin
TARGET=hello
UTIL_OBJ=util.o
MAIN_OBJ=main.o

CXXFLAGS:=$(CXXFLAGS) -g

.PHONY: all clean install uninstall

all: $(TARGET)

clean:
	rm -rfv $(TARGET) *.o

install:
	install -v $(TARGET) $(PREFIX)

uninstall:
	rm -rfv $(PREFIX)/$(TARGET)

hello: $(MAIN_OBJ) $(UTIL_OBJ)
	g++ -o $@ $(MAIN_OBJ) $(UTIL_OBJ)