//
//  main.c
//  Playground
//
//  Created by Alejandro D on 09/08/20.
//

#include <stdio.h>
#include <string.h>


#include "multiplicates.h"



int main(int argc, const char * argv[]) {
    printf("%4d %4d %4d %4d %4d %4d %4d %4d %4d %4d %4d %4d\n",0, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1);
    printf("%2d = %4d %4d %4d %4d %4d %4d %4d %4d %4d %4d %4d\n",0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1);
    
    printf("%4.0f %6.4f %6.4f %6.4f %6.3f %6.2f\n",0.0, 0.0156, 0.0312, 0.0625, 0.125, 0.25);
    printf("%2.0f = %6.4f %6.4f %6.4f %6.3f %6.2f\n",0.0, 0.0156, 0.0312, 0.0625, 0.125, 0.25);
    
    return 0;
};
