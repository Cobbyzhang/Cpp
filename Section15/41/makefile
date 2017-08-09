OBJS = TextQuery.o Query.o main.o
main: $(OBJS)
	g++ -o main $(OBJS)
TextQuery.o: TextQuery.cpp TextQuery.h
	g++ -c TextQuery.cpp
Query.o: Query.cpp Query.h Query_base.h Query_inheritance.h
	g++ -c Query.cpp
main.o: main.cpp Query.h Query_base.h Query_inheritance.h TextQuery.h
	g++ -c main.cpp
clean:
	rm -f main $(OBJS) 

    


