mytunez:	main.c structs.c func.c
	gcc main.c structs.c func.c -o mytunez

clean:
	rm mytunez
	rm *.o
	rm *~

run:
	./mytunez
