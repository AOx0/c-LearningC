//
//  main.c
//  Playground
//
//  Created by Alejandro D on 09/08/20.
//

#include <stdio.h>


// MARK: - Algo
void sayHi(char name[], int age) {
    printf("Hello %s\n", name);
    printf("So, you are %d\n", age);
};

int main(int argc, const char * argv[]) {
    // insert code here...
    sayHi("Juan", 19);
    return 0;
}

