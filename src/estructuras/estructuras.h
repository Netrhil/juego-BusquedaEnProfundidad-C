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

typedef struct piso{
	int largo;
	int ancho;
	char ** matriz;
} Piso;
