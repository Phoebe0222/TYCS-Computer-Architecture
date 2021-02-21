# Introduction to C
The language used to implement ideas in this subject is C. Here are some programs and notes for learning C. 

---
## First program 
Run hello.c:
- In the ANSI Standard C, varialbes and functions MUST be declared before they are used, i.e. 
    - MUST declare the type of data that the function returns 
    - MUST declare the type for varibles passed into functions
- Access libraries: `#include <stdio.h>`, `#include <name_of_lib.h>` 
- Compile the program: `cc hello.c`, `cc -ansi hello.c -o hello.o`
- Load and run the executable: `./a.out`, `./hello.o`  

---
## Variables and Arithmetic Expressions
Run faToCel.c:
- Integer division truncates, i.e. any fractional part is disabled, e.g. 5/9 is truncated to 0 because they are integers. To avoid truncating, decalre variables to be float 
- If an arithmetic operator has integer operands, an integer operation is performed. If one of the operands is floating-point, then a floating-point operation is performed, i.e. the integer will be converted to floating point before operation.   
- The `printf` conversion: %x.yf print as floating point, at least x wide and y after decimel point 