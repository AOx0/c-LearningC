//
//  main.c
//  Playground
//
//  Created by Alejandro D on 09/08/20.
//

#include <stdio.h>
#include <string.h>


// MARK: - Algo

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

int main(int argc, const char * argv[]) {
    // insert code here...
    char string[1000];
    strcat(string, "Hola ");
    strcat(string, "Amigo\n");
    printf("%s", string); // Hola Amigo
    printf("%s\n", blackSlashPrint());
    return 0;
};

