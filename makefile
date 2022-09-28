HDRDIR := include
SRCDIR := src

run:
	g++ main.cpp $(SRCDIR)/ArrayList.cpp -I$(HDRDIR) -o out
	./out

