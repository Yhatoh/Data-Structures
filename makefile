HDRDIR := include
SRCDIR := src

compile:
	g++ main.cpp $(SRCDIR)/LinkedList.cpp $(SRCDIR)/ArrayList.cpp -I$(HDRDIR) -o out

