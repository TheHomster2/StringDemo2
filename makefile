stringy: stringy.c
	gcc stringy.c -o out
run: out
	./out
clean:
	rm out
