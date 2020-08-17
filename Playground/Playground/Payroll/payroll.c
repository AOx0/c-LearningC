//
//  payroll.c
//  Playground
//
//  Created by Alejandro D on 15/08/20.
//
#include <string.h>

#include "payroll.h"

void closeFiles(FILE * in, FILE * out) {
    fclose(in); fclose(out);
}

void printHello() {
    FILE * in = fopen("paydata.txt", "r");
    FILE * out = fopen("payroll.txt", "w");
    
    fprintf(out, "%10s %10s %10s %10s %10s\n", "Nombre","Apellido", "Horas", "Salario", "TOTAL");
    char name[20] = "";
    double toPay = 0;
    
    while (0 == 0) {
        fscanf(in, "%s", name); if (strcmp(name, "END") == 0) { break; };
        
        char surname[20] = ""; double salary = 0.0; int hours = 0;
        fscanf(in,"%s %d %lf\n",surname, &hours, &salary);
        double payToEmployee = hours * salary; toPay += payToEmployee;
        
        fprintf(out, "%10s %10s %10d %10.2f %10.2f\n", name, surname, hours, salary, payToEmployee);
    }
    fprintf(out, "\n%10s %40.2f \n", "Money to pay: ", toPay);
    
    closeFiles(in, out);
};
