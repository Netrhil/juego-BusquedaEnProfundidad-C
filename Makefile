DIRO = ./build
DIRI = ./src

release:
	mkdir -p $(DIRO)
	gcc -o $(DIRO)/juego $(DIRI)/main.c

clean:
	rm $(DIRO)/*
