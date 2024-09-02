
NOM=TP3

CC=g++

OBJ=build/$(NOM).o\
    build/labyrinte.o\
	build/gestion.o 

.cpp.o :
	$(CC) $(FLAGS) -c $< -o $@

$(NOM) : prepare $(OBJ)
	$(CC) -o $(NOM) $(OBJ)

prepare :
	mkdir -p build

build/gestion.o : include/gestion.hpp src/gestion.cpp
	$(CC) $(FLAGS) -c src/gestion.cpp -o build/gestion.o

build/labyrinte.o : include/labyrinte.hpp include/gestion.hpp src/labyrinte.cpp
	$(CC) $(FLAGS) -c src/labyrinte.cpp -o build/labyrinte.o

build/$(NOM).o : src/$(NOM).cpp
	$(CC) $(FLAGS) -c src/$(NOM).cpp -o build/$(NOM).o

clean :
	\rm -rf build
	\rm -f $(NOM)

archive : clean
	\rm -f $(NOM).tar
	\rm -f $(NOM).tar.gz
	tar cvf $(NOM).tar *
	gzip $(NOM).tar

test:
	bats checkbats.bats