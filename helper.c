//
// Created by Maxi Blanco on 26/11/2021.
//

#include "helper.h"
#include <stdio.h>
#include "stdlib.h"

char *readFile(char *fileName) {
    char * buffer = NULL; // creo un puntero para almacenar los caracteres que extraiga del archivo
    FILE * archivo = fopen(fileName,"r");

    if (archivo != NULL){
        fseek(archivo,0,SEEK_END);
        long length = ftell(archivo);
        fseek(archivo,0,SEEK_SET);
        buffer = (char*)malloc(length+1);
        fread(buffer,1,length,archivo);
        buffer[length] = '\0';
    }
    fclose(archivo);
    return buffer;


}