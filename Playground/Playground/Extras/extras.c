//
//  extras.c
//  Playground
//
//  Created by Alejandro D on 15/08/20.
//
#include <string.h>
#include "extras.h"


char *songLetter() {
    static char letter[1000];
    
    strcat(letter, "Quiero un abrazo sincero,\n");
    strcat(letter, "de un amigo, de un obrero,\n");
    strcat(letter, "\nQuiero que el día de hoy\n");
    strcat(letter, "todos te digan te quiero\n");
    strcat(letter, "un te quiero de verdad\n");
    strcat(letter, "no porque la publicidad\n");
    strcat(letter, "diga que me debes amar\n");
    strcat(letter, "más el 14 de febrero\n");
    strcat(letter, "\nNo voy a los eventos de ahora\n");
    strcat(letter, "pues aporto mas\n");
    strcat(letter, "ayudando al vecino a techar su purificadora\n");
    strcat(letter, "\n");
    
    return letter;
};

char *blackSlashPrint() {
    static char text[] = "An escape sequence starts with \\";
    return text;
}

void writeTextToFile(char path[]) {
    FILE * in = fopen(path, "w");
    
    fprintf(in, "Contenidooooooooooooo1\n");
    fprintf(in, "Contenidooooooooooooo2\n");
    fprintf(in, "Contenidooooooooooooo3\n");
    fprintf(in, "Contenidooooooooooooo4\n");
    fprintf(in, "end\n");
    fclose(in);
}

char *readTextFromFile(char path[]) {
    FILE * fp = fopen(path, "r");
    static char text[1000];
    while (1 == 1) {
        char element[100];
        fscanf(fp,"%s", element);
        if (strcmp(element, "end") == 0) { break; };
        strcat(element, "\n");
        strcat(text, element);
    }
    
    fclose(fp);
    
    return text;
}
