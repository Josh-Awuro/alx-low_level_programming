0x10. C - Variadic functions
Resources
stdarg.h
Variadic Functions
Const Keyword
man stdarg
Learning Objectives
What are variadic functions
How to use va_start, va_arg and va_end macros
Why and how to use the const type qualifier
Variadic Functions
Variadic functions are functions that can accept a variable number of arguments. These functions can be very useful when you need to pass an unknown number of arguments to a function.

How to use va_start, va_arg and va_end macros
In order to use variadic functions, you will need to make use of three macros: va_start, va_arg, and va_end.

va_start
The va_start macro is used to initialize the list of arguments. It takes two parameters: ap, which is a va_list type variable that will store the list of arguments, and last, which is the last named argument in the function.

void function(int arg1, ...) {
    va_list ap;
    va_start(ap, arg1);
    // rest of the code
}
va_arg
The va_arg macro is used to retrieve the next argument from the list. It takes two parameters: ap, which is the va_list type variable that stores the list of arguments, and type, which is the type of the argument that you want to retrieve.

void function(int arg1, ...) {
    va_list ap;
    va_start(ap, arg1);
    int arg2 = va_arg(ap, int);
    // rest of the code
}
va_end
The va_end macro is used to clean up the list of arguments. It takes one parameter: ap, which is the va_list type variable that stores the list of arguments.

void function(int arg1, ...) {
    va_list ap;
    va_start(ap, arg1);
    int arg2 = va_arg(ap, int);
    // rest of the code
    va_end(ap);
}
Variadic functions can be very useful when you need to pass an unknown number of arguments to a function. By using the va_start, va_arg, and va_end macros, you can easily work with variadic functions in your code.

The const keyword in C
In C programming language, const is a keyword used to declare a variable as read-only. This means that the value of a const variable cannot be changed once it is initialized.

The const variable is stored in the read-only memory (ROM) section of the program memory. This means that the value of a const variable cannot be changed at runtime and is guaranteed to be the same throughout the execution of the program

Syntax
The syntax for using the const keyword in C is as follows:

const data_type variable_name = value;
Example
const int num = 10;
In the above example, the variable num is declared as a const of type int and is initialized with a value of 10. Once initialized, the value of num cannot be changed.

If you try to modify the value of a const variable, the compiler will generate an error message.

Using const in your code has several benefits, including:

It makes your code more readable and self-documenting, by indicating that the value of a variable will not change.
It helps prevent bugs caused by accidentally modifying a variable that should not be changed.
It allows the compiler to perform optimizations, which can result in faster and more efficient code.
In summary, the const keyword in C is used to declare read-only variables, which cannot be modified once they are initialized. Using const can help make your code more readable, prevent bugs, and improve performance.