//
//  Square.c
//  cSwift-Operations
//
//  Created by Alejandro D on 15/08/20.
//

#include "Square.h"

double *getBaseAndHeight() {
    double base, altura;
    printf("Ingresa la base del cuadrilátero "); scanf("%lf", &base);
    printf("Ingresa la altura del cuadrilátero "); scanf("%lf", &altura);
    
    static double results[2];
    results[0] = base;
    results[1] = altura;
    
    return results;
}

void c_quadrilateral_area() {
    double *base_altura = getBaseAndHeight();
    double area = base_altura[0] * base_altura[1];
    
    printf("El área del cuadrilátero es: %.2f\n\n", area);
};

void c_quadrilateral_perimeter() {
    double *base_altura = getBaseAndHeight();
    double perimetro = (base_altura[0] * 2) + (base_altura[1] * 2);
    
    printf("El perimeto del cuadrilátero es: %.2f\n\n", perimetro);
};
