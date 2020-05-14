#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

TRGDIR=/tmp/rysowanie_3D

__start__: ./rysowanie_3D
	./rysowanie_3D

./rysowanie_3D: obj obj/main.o obj/lacze_do_gnuplota.o obj/Scena.o obj/Dron.o obj/Figura.o obj/Wektor3D.o obj/Powierzchnia.o
	g++ -Wall -pedantic -std=c++11 -o ./rysowanie_3D obj/main.o obj/lacze_do_gnuplota.o obj/Scena.o obj/Dron.o obj/Figura.o obj/Wektor3D.o obj/Powierzchnia.o


obj:
	mkdir -p obj

obj/lacze_do_gnuplota.o: inc/lacze_do_gnuplota.hh src/lacze_do_gnuplota.cpp
	g++ -c ${CXXFLAGS} -o obj/lacze_do_gnuplota.o src/lacze_do_gnuplota.cpp

obj/main.o: src/main.cpp inc/Wektor3D.hh inc/Dron.hh inc/Scena.hh inc/Figura.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/Scena.o: src/Scena.cpp inc/Scena.hh inc/Dron.hh inc/Powierzchnia.hh inc/lacze_do_gnuplota.hh inc/Figura.hh
	g++ -c ${CXXFLAGS} -o obj/Scena.o src/Scena.cpp

obj/Dron.o: inc/Dron.hh src/Dron.cpp inc/Figura.hh
	g++ -c ${CXXFLAGS} -o obj/Dron.o src/Dron.cpp

obj/Figura.o: inc/Figura.hh src/Figura.cpp inc/Wektor3D.hh
	g++ -c ${CXXFLAGS} -o obj/Figura.o src/Figura.cpp

obj/Wektor3D.o: src/Wektor3D.cpp inc/Wektor3D.hh
	g++ -c ${CXXFLAGS} -o obj/Wektor3D.o src/Wektor3D.cpp

obj/Powierzchnia.o: src/Powierzchnia.cpp inc/Powierzchnia.hh inc/Figura.hh
		g++ -c ${CXXFLAGS} -o obj/Powierzchnia.o src/Powierzchnia.cpp

clean:
	rm -f obj/*.o ./rysowanie_3D
