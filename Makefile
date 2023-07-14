all : main
main : main.o
	gcc -pthread $^ -o $@ -lpthread
main.o : main.c
	gcc -pthread -c $^ -o $@ -lpthread
clean :
	rm -rf main *.o
