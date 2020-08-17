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

### Symbolic Constants with #define 

symbolic constants (also called manifest or named constants)—identifiers that we set to the required constants in one place.

```c
#include <stdio.h>
#define ChargePerHour 100 //Constant in the whole program
#define MinJobCost 150 //Constant in the whole program

int main() {
double hours, parts, jobCharge; printf("Hours worked? "); scanf("%lf", &hours); printf("Cost of parts? "); scanf("%lf", &parts); jobCharge = hours * ChargePerHour + parts; if (jobCharge < MinJobCost) jobCharge = MinJobCost; printf("\nCharge for the job: $%3.2f\n", jobCharge);
}
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



## Directives

Directives in C normally come at the top of the program. For our purposes, the #define directive takes the following form:



### #define

When the program is compiled, C performs what is called a “pre-processing” step. It **replaces all occurrences of the identifier by its replacement text.**

```
#define [identifier] ["replacement text"]
```



## Bools

**The original C standard and the later ANSI C standard did not define a Boolean data type.**

Traditionally, C has used the concept of the value of an expression to denote true/false. A numeric expression can be used in any context where a true/false value is required. The expression is considered true if its value is nonzero and false if its value is zero.



**If we ever need a “Boolean” variable,** we can use an int variable with 1 representing true and 0 representing false.



### If statement

Just like in Swift

```c
if (expression) {
	...
} else if (expression) {
	...
} else {
	...
}
```



## Assignment Operators

- The **entire construct** consisting of the variable = and the expression is referred to as an **assignment expression**.

- When the **expression is followed by a semicolon**, it becomes an **assignment statement**.

- The value of an assignment expression is simply the value assigned to the variable.

```c
a = b = c = 13;
// a = (b = (c = 13))
```

- **+=** 

  ```c
  n += value //n = n + value
  ```

- **-=**

  ```c
  n -= value //n = n - value
  ```



Other assignment operators include **-=**, ***=**, **/=**, and **%=**. If op represents any of +, -, *, /, or %, then

variable **op** = value

variable = variable **op** expression

## Increment and Decrement Operators

### ++

It can be declared as ++n and n++. It increments in 1 n.

```c
n = 1
n2 = n++
	//n2 = n		First it assigns
	//n2 = ++n2	Then it increments
n3 = ++n				
  //n3 = (n + 1)	First it increments then it assigns
```

Example:

```c
int n = 5;
n++;
printf("Number: %d\n", n); //Number: 6
```

```c
int n = 5;
++n;
printf("Number: %d\n", n); //Number: 6
```


At the end both are 6

```c
int n = 5;
int n2 = n++;
printf("Number: %d\n", n2); //Number: 5
```

```c
int n = 5;
int n2 = ++n;
printf("Number: %d\n", n2); //Number: 6
```

At the end only ++n changed the value "correctly"



Even though ++n and n++ both add 1 to n, in certain situations, the side effect of ++n is different from n++. This is so because **++n increments n before using its value**, whereas **n++ increments n after using its value**.

### --

It works exactly as ++ but decrements n in 1

## Loops

### While

```c
while (expression) {
  ...
}
```

### For

```c
for (expression1;expression2;expression3) {
	...
    //Be aware of scope of variables
}
```

### Do ... While

There are situations in which it is convenient to have a loop **executed at least once.**

1. <statement> is executed
2. <expression> is then evaluated; if it is true (non-zero), repeat from step
   1. If it is false (zero), execution continues with the statement, if any, after the semicolon.

```c
do {
	...
} while ( expression ); //Execute while expression is valid
//Executes at least one time
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



If

```c
if (condition) {
	//do here
}
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



# Working with Files

1. The first thing we need to do is declare an identifier called a **“file pointer.”** This can be done with the statement:

```c
FILE * filePointer;
```

> The word **FILE** must be spelt as shown, with all uppercase letters. The spaces before and after * may be omitted.

2. The second thing we must do is **associate the file pointer *in* with the file *path/name*** and tell C we will be reading / writing data from / to the file.

```c
in = fopen("path/name.txt", "r");
```

> This tells C to “open the file input.txt for reading”: "r" indicates reading. (We will use "w" if we want the file to be opened for “writing,” that is, to receive output.)
>
> When writing mode, if the file does not exist the program creates it.



The same can be accomplished with *one-liner* expression:

```c
FILE * filePointer = fopen("path/name.txt", "r")
```



3. Now we can read (or write to) the file. **It is up to us to ensure that the file exists and contains the appropriate data.**

## fclose

When we have finished reading data from the file, we should close it.

```c
fclose(filePointer);
```

There is one argument, the file pointer. **This statement breaks the association of the file pointer in with the file**. If we need to, **we could now link the identifier *filePointer* with another file**.



## fscanf: Input

**Read data from the file** (just one "input", to determinate which one will be the limit a \n or space must be found). It is used in exactly the same way as scanf.

```c
fscanf(filePointer, "%d", &num);
```

Any space separates one item from other in the file.



## fprintf: Output

fprintf **to send output** to the file. It is used in exactly the same way as printf except that the first argument is the file pointer out.

```c
fprintf(filePointer, "The sum is %d\n", sum);
// will write "The sum is 143" to the file output.txt.
```

