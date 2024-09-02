
NOM=TP2

CC=g++

OBJ=build/$(NOM).o\
    build/AttributNonDefinieXML.o\
    build/DocumentXML.o\
    build/ElementXML.o\
    build/Histoire.o\
    build/Lecteur.o\
    build/NoeudXML.o\
    build/Phrase.o\
    build/TexteXML.o\
	build/AVLTree.o # Ajout de la classe AVLTree.o

.cpp.o :
	$(CC) $(FLAGS) -c $< -o $@

build/$(NOM) : prepare $(OBJ)
	$(CC) -o build/$(NOM) $(OBJ)

prepare :
	mkdir -p build

build/AttributNonDefinieXML.o : include/AttributNonDefinieXML.hpp src/AttributNonDefinieXML.cpp
	$(CC) $(FLAGS) -c src/AttributNonDefinieXML.cpp -o build/AttributNonDefinieXML.o

build/DocumentXML.o : include/DocumentXML.hpp include/ElementXML.hpp src/DocumentXML.cpp
	$(CC) $(FLAGS) -c src/DocumentXML.cpp -o build/DocumentXML.o

build/ElementXML.o : include/ElementXML.hpp include/AttributNonDefinieXML.hpp include/NoeudXML.hpp src/ElementXML.cpp
	$(CC) $(FLAGS) -c src/ElementXML.cpp -o build/ElementXML.o

build/Histoire.o : include/Histoire.hpp include/Phrase.hpp src/Histoire.cpp
	$(CC) $(FLAGS) -c src/Histoire.cpp -o build/Histoire.o

build/Lecteur.o : include/Lecteur.hpp include/DocumentXML.hpp include/ElementXML.hpp src/Lecteur.cpp
	$(CC) $(FLAGS) -c src/Lecteur.cpp -o build/Lecteur.o

build/NoeudXML.o : include/NoeudXML.hpp src/NoeudXML.cpp
	$(CC) $(FLAGS) -c src/NoeudXML.cpp -o build/NoeudXML.o

build/Phrase.o : include/Phrase.hpp src/Phrase.cpp
	$(CC) $(FLAGS) -c src/Phrase.cpp -o build/Phrase.o

build/TexteXML.o : include/TexteXML.hpp include/NoeudXML.hpp src/TexteXML.cpp
	$(CC) $(FLAGS) -c src/TexteXML.cpp -o build/TexteXML.o

build/AVLTree.o : include/AVLTree.hpp src/AVLTree.cpp
	$(CC) $(FLAGS) -c src/AVLTree.cpp -o build/AVLTree.o

build/$(NOM).o : src/$(NOM).cpp
	$(CC) $(FLAGS) -c src/$(NOM).cpp -o build/$(NOM).o

clean :
	\rm -rf build

archive : clean
	\rm -f $(NOM).tar
	\rm -f $(NOM).tar.gz
	tar cvf $(NOM).tar *
	gzip $(NOM).tar

test:
	bats test_result/test.bats
