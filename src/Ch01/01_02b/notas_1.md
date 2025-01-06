What is a Function?
A function is a block of code that performs a specific task. Every program must have at least one function, called main, which serves as the entry point for the program. The main function is where execution begins and typically includes calls to other functions

Function Components
Key components: 
- the return type: type of value the function will return. If a function does not return a value, its return type is void.
the function name: unique identifier used to call the function.
- parameters: (optional) variables declared in the function's definition. They allow you to pass data into the function. they are placeholders for the values the function will operate on.  
- the function body:{the statements that define what the function does;}

#include <cstdio>
int main(){
    printf("hey there\n"); 
    return 0;
}
#include <cstdio>: header file incluides funtionalities for c style for input and output operations. 
\n: is one of the most used escape secuences for strings


int main(int argc, char* argv[]) <-- arguments for a funtion
int argc: integer that represents the number of comman line arguments passed to the program
char* argv[]: is an array of C-style representung those arguments

#include <iostream>

// Function declaration
int add(int a, int b){ //function that takes two integer parameters, a and b.
    return a + b; // Return the sum of a and b
}

int main(){
    int result = add(5, 3); // FUNTION CALL with arguments 5 and 3
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}

You can return a value from a function using the return statement.
int doubleNumber(int num){
    return num * 2;
}

Example of a function with no return value:
void printMessage(){
    std::cout << "Welcome to the game!" << std::endl;
}

insertion operator <<
extration operator >>

cuando se programa en C, se utilizan archivos headers para incluir funciones estándar de la biblioteca de C. Estos archivos headers se nombran con la extensión ".h" y se incluyen en el código utilizando el #include. Por ejemplo:
#include <stdlib.h>
#include <stdio.h>

Estos archivos permiten el uso de funciones estándar como malloc (para asignación de memoria) y printf (para imprimir en la pantalla).

En C++, las versiones de los archivos de cabecera de C se incluyen de manera diferente: se les añade un prefijo 'c' y se omite la extensión '.h'. Esto permite utilizar funciones de la biblioteca estándar de C dentro de programas en C++

cstdlib: Incluye funciones para utilidades generales, como la asignación de memoria, el control de procesos y la generación de números aleatorios.
cstdio: Incluye funciones para operaciones de entrada y salida, similar a iostream

Mathematics and Numeric Functions
std::sqrt(number) --> raíz cuadrada de un número


Standard Template Library, or STL
Provides a set of common classes and functions for data structures and algorithms. Components:
Containers: Such as std::vector, std::list, and std::map.
Algorithms: Functions for sorting, searching, and manipulating data.
Iterators: Objects that allow you to traverse containers.

Other C++ Headers
<vector>: Defines the vector container class, a part of the STL.
<algorithm>: Provides a variety of algorithms for sorting, searching, and manipulating data. This is also part of the STL.
<memory>: Includes smart pointers such as shared_ptr and unique_ptr.
<fstream>: Includes file stream classes for file input and output.
<locale>: Provides localization features.
<thread>: Includes classes and functions for creating and managing threads.
<mutex>: Offers mutual exclusion primitives for thread synchronization.


One of the most common practices in introductory C++ programming is the use of the directive using namespace std;. While this might seem convenient, especially for beginners, it is widely regarded as a bad practice in professional and large-scale C++ development.

Many tutorials, textbooks, and online resources for beginners include using namespace std; as a quick way to avoid prefixing the standard library elements (like std::cout, std::string, etc.) with std::. This makes the code less verbose and easier to write for those just starting out.

The main issue with using namespace std; is that it pollutes the global namespace. The C++ Standard Library includes a vast number of identifiers, and importing all of them into the global namespace increases the risk of name collisions. 

if you or a third-party library define a function, variable, or class with the same name as one in the Standard Library, it can lead to ambiguous code and hard-to-diagnose bugs.

Best Practices
Instead of using namespace std;, a better approach is to explicitly qualify the names you use, such as std::cout, std::vector, etc. 

