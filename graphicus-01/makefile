#
# Auteur: C.-A. Brunet
# Date: 04 janvier 2024
# Modifie par : ...
# Date : ...
# Description: compilation de graphicus-01. Ce fichier fait partie de 
#	la distribution de Graphicus.
#
graphicus-01: graphicus-01.o tests.o canevas.o couche.o forme.o cercle.o vecteur.o
	g++ -o graphicus-01 graphicus-01.o tests.o canevas.o couche.o forme.o cercle.o vecteur.o

graphicus-01.o: graphicus-01.cpp canevas.h couche.h forme.h cercle.h
	g++ -c graphicus-01.cpp

tests.o: tests.cpp tests.h canevas.h couche.h forme.h
	g++ -c tests.cpp

canevas.o: canevas.cpp canevas.h couche.h forme.h
	g++ -c canevas.cpp

couche.o: couche.cpp couche.h forme.h
	g++ -c couche.cpp

forme.o: forme.cpp forme.h
	g++ -c forme.cpp

cercle.o: cercle.cpp cercle.h
	g++ -c cercle.cpp

vecteur.o: vecteur.cpp vecteur.h
	g++ -c vecteur.cpp

clean:
	rm  -f *.o
