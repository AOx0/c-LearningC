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



## Format specification: String formatting

| Data Type | String Char                         | Representation |
| --------- | ----------------------------------- | -------------- |
| String    | %s                                  | **"**Hola**"** |
| Integer   | %d                                  | 12             |
| Character | %c                                  | **'**A**'**    |
| Float     | %f                                  | 12.123         |
| Double    | %lf **(scanf)**     %f **(printf)** | 12.234366345   |

### Field Widht

#### Alphabetical 

```
"%[Int]String"
```

#### Numerical

```
"%[0][Int][.Int]DataType"                    Example - "%0100.4f"
```



In all cases between % and the data char identifier a ***field widht*** can be specified to print only a custom width

```c
const char hola[] = "Hola Amigos";
printf("%2s\n", hola); //Hola Amigos
printf("%-2s\n", hola); //Hola Amigos

printf("%20s\n", hola); //         Hola Amigos
// Spaces are rquired to fullfill the "field with" so it prints them like spaces
```

```c
const double n = 124231.2321312;

printf("%f \n", n);			//124231.2321312
printf("%.2f \n", n); 	//124231.23
printf("%20.3f \n", n);	//      124231.232
printf("%020.5f \n", n);	//000000124231.23213
```



### Concatenate Strings : strcat

To concatenate strings the **strcat(** char \***string1**, const char \***string2** **)** function is very useful. Available with **\#include <string.h>**

- **string1** is the destintaion string, the one we want to modify.
- **string2** is the string we want to **add** to string1

```c
char string[20];
strcat(string, "Hola ");
strcat(string, "Amigo\n");
printf("%s", string); // Hola Amigo
```

### Modify Strings : strcpy

Yo can modify a string using **strcpy(** char \***string1**, const char \***string2** **)**. Available with **\#include <string.h>**

- **string1** is the destintaion string, the one we want to modify.
- **string2** is the string we want to **store** in string1

```c
char name[10] = "Sofia";
name = "Lol"; //Invalid
strcpy(name, "Lol"); //Valid
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

