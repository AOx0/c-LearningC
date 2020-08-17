//
//  multiplicates.c
//  Playground
//
//  Created by Alejandro D on 15/08/20.
//

#include <string.h>
#include "multiplicates.h"

char *tablaMultiplicar(double numero) {
    static char result[1000];
    memset(result, 0 , strlen(result));
    
    for (int range = 1; range <= 10; range++) {
        char text[20] = "";
        sprintf(text, "%d x %.0f = %.0f\n", range, numero, range * numero);
        strcat(result, text);
    }
    
    return result;
}

double *getFahrenheitOf(double celsius) {
    static double result = 0.0;
    result = (32) + ((celsius * 9) / 5);
    return &result;
}

char *getFahrenheitFrom(double rangeStart, double rangeEnd, double rangeIncrement) {
    static char result[1000];
    memset(result, 0, strlen(result));
    char formatedTitle[30];
    sprintf(formatedTitle, "\n%10s %10s\n", "Celsius", "Fahrenheit");
    strcat(result, formatedTitle);
    
    for (int r = rangeStart; r <= rangeEnd; r += rangeIncrement) {
        char text[100];
        sprintf(text, "%10d %10.1f\n", r, *getFahrenheitOf(r));
        strcat(result, text);
    }
    return result;
}
