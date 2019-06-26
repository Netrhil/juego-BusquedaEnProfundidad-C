#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "../estructuras/estructuras.h"

void obtenerPiso(char piso) {

    FILE *manejadorArchivos;
    char linea[150];
    char directorioProyecto[100];
    int largoAuxiliar = 0, anchoAuxiliar =0;

    // Genera el path del directorio 
    getcwd(directorioProyecto, sizeof(directorioProyecto));

    strcat(directorioProyecto, "/src/pisos/piso");
    strcat(directorioProyecto, &piso);
    strcat(directorioProyecto, ".txt");

    manejadorArchivos = fopen(directorioProyecto, "r");

    if(manejadorArchivos == NULL)
        printf("No hay fichero");

    // Lee las primeras dos lineas del archivo , ancho y alto
    fgets(linea, 150, manejadorArchivos);
    int largoLaberinto = atoi(&linea[0]);
    fgets(linea, 150, manejadorArchivos);
    int anchoLaberinto = atoi(&linea[0]);


    // Generando la matriz
    char **matrizPiso = malloc(sizeof( char*) * largoLaberinto);

    for(int i=0;i<largoLaberinto;i++){
        matrizPiso[i] = malloc(sizeof( char) * anchoLaberinto);
    }


    //Lee las lineas restantes y las agrega a la matriz
    while (fgets(linea, 150, manejadorArchivos) != NULL) {
            
            for (size_t i = 0; i < 150; i++) {
                if( anchoAuxiliar < anchoLaberinto){
                    if (    linea[i] == 'I' || 
                            linea[i] == 'C' || 
                            linea[i] == 'M' || 
                            linea[i] == 'B' || 
                            linea[i] == 'S' || 
                            linea[i] == 'L' || 
                            linea[i] == 'T') {

                        matrizPiso[largoAuxiliar][anchoAuxiliar] = linea[i];
                        anchoAuxiliar++;
                    }
                }
                
            }
            anchoAuxiliar = 0;
            largoAuxiliar++;
    }

    puts("Piso: ");

    for (int i = 0; i < largoLaberinto; i++) {
        for (int j = 0; j < anchoLaberinto; j++) {
           printf("%c", matrizPiso[i][j]);
        }
        puts("\n");
    }
    

   fclose(manejadorArchivos);
}