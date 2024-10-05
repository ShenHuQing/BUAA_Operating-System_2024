all: fibo
	$(MAKE) -C code
fibo: code/fibo.o code/main.o
	gcc -o fibo code/fibo.o code/main.o
code/fibo.o:
	$(MAKE) -C code
code/main.o:
	$(MAKE) -C code
clean:
	rm -f /code/*.o 
