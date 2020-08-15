//
//  CTest.c
//  C2Swift
//
//  Created by Alejandro D on 11/08/20.
//

#include "CTest.h"

const char* im_rF(const char* path) {
    FILE *file_pointer;
    file_pointer  = fopen (path, "r");
    static char string[100];
    fgets(string, 100, file_pointer);
    fclose(file_pointer);
    
    return string;
};

void im_wF(const char* path, const char* contents) {
    FILE *file_pointer;
    file_pointer  = fopen (path, "w");
    fputs(contents, file_pointer);
    fclose(file_pointer);
}
