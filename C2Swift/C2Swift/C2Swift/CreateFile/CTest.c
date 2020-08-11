//
//  CTest.c
//  C2Swift
//
//  Created by Alejandro D on 11/08/20.
//

#include "CTest.h"

void createFile(const char* path) {
    // Write
    FILE *file_pointer;
    file_pointer  = fopen (path, "w");
    fputs("Hello World\n", file_pointer);
    fclose(file_pointer);
    
    // Read
    FILE *file_pointer2;
    file_pointer2  = fopen (path, "r");
    char string[100];
    fgets(string, 100, file_pointer2);
    printf("%s", string);
    fclose(file_pointer2);
}
