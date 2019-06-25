DIRO = ./build
DIRI = ./src

release:
	mkdir -p $(DIRO)
	gcc -o $(DIRO)/prueba $(DIRI)/main.c

clean:
	rm $(DIRO)/*
