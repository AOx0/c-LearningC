# c-LearningC

[TOC]

## Declaring Variables / Constants

```c
const dataType name [= value];
```

```c
// const char nombre[number of posible chars + 1] = "Pedro" (is 5 long)
const char nombre[6] = "Pedro"

const char acentoA = 'a'

float pi = 3.1416
```



## String formatting

| Data Type | String Char                         | Representation |
| --------- | ----------------------------------- | -------------- |
| String    | %s                                  | **"**Hola**"** |
| Integer   | %d                                  | 12             |
| Character | %c                                  | **'**A**'**    |
| Float     | %f                                  | 12.123         |
| Double    | %lf **(scanf)**     %f **(printf)** | 12.234366345   |

### Concatenate Strings

To concatenate strings the **strcat(** char \***string1**, const char \***string2** **)** function is very useful. Available with **\#include <string.h>**

- **string1** is the destintaion string, the one we want to modify.
- **string2** is the string we want to add to string1

```c
char string[20];
strcat(string, "Hola ");
strcat(string, "Amigo\n");
printf("%s", string); // Hola Amigo
```



## Input

### scanf

```c
scanf("%[Data type]...", &[var]);
```

```c
int age;
printf("What is your age?\n");
scanf("%d", &age);
```

```c
char name[20]; // For C to allocate the necessary memory 
printf("What is your name?\n");
scanf("%s", name); // No pointer needed
```

```c
// Input 2 values
char name[20];
char surname[20];
scanf("%s%s", name, surname);
```



### fgets

**Downside**: It stores '\n' when you enter the input

```c
fgets([variable], [characters to input], [type input]);
```

```c
char name[20];
fgets(name, 20, stdin);
```



## Array

```c
datatype name[i to hold] [ = {values} ];
```

```c
double numbers[] = {123.123, 221.231, 231.23, 123.0};
```

```c
double numbers[20];
numers[0] = 9.0;
```



### Access

```c
arrayName[Index]
```

```c
double numbers[] = {123.123, 221.231, 231.23, 123.0};
printf("%f\n", numbers[0]); // 123.123
```



### Assign

```c
arrayName[Index] = Value
```

```c
double numbers[] = {123.123, 221.231, 231.23, 123.0};
printf("%f\n", numbers[0]); // 123.123
numbers[0] = 100.0;
printf("%f\n", numbers[0]); // 100.0
```



## Functions

```c
returnType Name (parameters) { ...; return returnType };
```

```c
void sayHi(char name[]) {
	printf("Hello %s\n", name);
};
```

