OBJS = TextQuery.o main.o
main: $(OBJS)
	g++ -o main $(OBJS)
TextQuery.o: TextQuery.cpp TextQuery.h
	g++ -c TextQuery.cpp
main.o: main.cpp TextQuery.h
	g++ -c main.cpp
clean:
	-rm -f main $(OBJS)
