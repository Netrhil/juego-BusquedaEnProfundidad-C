#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "../estructuras/estructuras.h"


void obtenerPiso(char piso) {

    char directorioPiso[19];
    FILE *manejadorArchivoLargos;
    char linea[150];
    char directorioProyecto[256];
/* 
    char *lineaParaLargos = NULL;
    size_t longitudParaLargos = 0;
    size_t numeroLinea;
 */
    
/*     strcpy(directorioPiso, "/home/netrhil/Repos/juego-BusquedaProfundidad/src/pisos/piso1.txt"); */
    getcwd(directorioProyecto, sizeof(directorioProyecto));
    
    strcat(directorioProyecto, "/src/pisos/piso");
    strcat(directorioProyecto, &piso);
    strcat(directorioProyecto, ".txt");

    puts(directorioProyecto);

    manejadorArchivoLargos = fopen(directorioProyecto, "r");

    if(manejadorArchivoLargos == NULL)
        printf("No hay fichero");

    fgets(linea, 150, manejadorArchivoLargos);
    int largoLaberinto = atoi(&linea[0]);
    fgets(linea, 150, manejadorArchivoLargos);
    int anchoLaberinto = atoi(&linea[0]);

    fclose(manejadorArchivoLargos);

    char **cosa=( char**) malloc(sizeof( char*)*largoLaberinto);

   for(int i=0;i<largoLaberinto;i++){
      cosa[i]=( char*) malloc(sizeof( char)*anchoLaberinto);
   }


   for(int i=0;i<largoLaberinto;i++){
      for(int j=0;j<anchoLaberinto;j++){
         cosa[i][j] = '_';
      }
   }

   for(int i=0;i<largoLaberinto;i++){
      for(int j=0;j<anchoLaberinto;j++){
        printf("%c", cosa[i][j]);
      }
      puts("\n");
   }

    /* matrizPiso=( struct zona**) malloc(sizeof( struct zona*)*largoLaberinto);

    for(int i=0;i<largoLaberinto;i++){
        matrizPiso[i]=( struct zona*) malloc(sizeof( struct zona)*anchoLaberinto);
    }

    for(int i=0;i<anchoLaberinto;i++){
        for(int j=0;j<largoLaberinto;j++){
            matrizPiso[i][j].tipo = '_';
        }
    } */

 /*    for(int i=0;i<largoLaberinto;i++){
            printf("\n");
        for(int j=0;j<anchoLaberinto;j++){
            printf("%c ",matrizPiso[i][j].tipo);
        }
        printf("\n");
    } */


    /* fscanf(manejadorArchivoLargos, "%s", buff);
  

    fgets(buff, 255, (FILE*)manejadorArchivoLargos);
    fgets(buff, 255, (FILE*)manejadorArchivoLargos);
    
   

   
 */


   /*  while ((numeroLinea = getline(&linea, &longitud, manejadorArchivo)) != -1) {
               
                for (int i = 0; i < longitud; i++) {
                    if (linea[i] != ' ') {
                        printf("%c", linea[i]);
                    }
                }
    }
    */

    
}