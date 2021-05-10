CC=g++

CFLAGS=-Ofast -march=native -mtune=native

LDFLAGS=

EXEC=main

SRC=./src/Format/CBitmap.cpp \
    ./src/Image/CImage.cpp   \
    ./src/Image/CLigne.cpp   \
    ./src/Image/CPixel.cpp   \
		./src/Ligne.cpp          \
		./src/Rectangle.cpp      \
    ./src/main.cpp					\
		    ./src/Cercle.cpp

OBJ= $(SRC:.cpp=.o)

all: $(EXEC)

main: $(OBJ)
	$(CC) $(CFLAGS) -o ./$@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean mrproper

clean:
	find  -name main -exec rm {} \;
	find ./src -name *.o  -exec rm {} \;

mrproper: clean
	rm $(EXEC)
