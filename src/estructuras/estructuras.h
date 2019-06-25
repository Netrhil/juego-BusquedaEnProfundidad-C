typedef struct zona { 
   char tipo;
}zona;

typedef struct pos{
	int x;
	int y;
}pos;

typedef struct estado{
	int id;
}Estado;

typedef struct listaEstados{
	Estado *estados;
	int n;
}listaEstados;

struct zona **matrizPiso;

struct ficha { 
   char tipo;
};

struct ficha **tablero;

