# Holberton project: _printf

## About
`_printf` is our first group project at Holberton School.<br/>
Its goal is to recreate as much of the pre-existing `printf` standard library function as possible, with a MVP set to recognise the conversion specifiers `c`, `s`, `i` and `d`.<br/>
Through this project we learned to use GitFlow, create flowcharts, write technical documentation, and ensure our code is clean and easy to understand.<br/>
<br/>
Our function `_printf`, like the original, is a _variadic function_ that takes a constant character string and zero or more arguments.<br/>
Its prototype is as follows:<br/>
`int _printf(const char *format, ...);`<br/>
As _printf uses the `write` function to print to standard output, the expected return value is the number of printed characters.<br/>
<br/>
Compilation command:<br/>
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
<br/>
The options given above ensure that our code is compatible with as many machines and environments as possible thanks to `-std=gnu89`, and has strict adherence to ISO C and C++ (`-pedantic`).<br/>The option `-Wno-format` removes from `-Wall` the possibility to warn about incompatibility between arguments and the conversion specifiers supposed to relate to them.<br/>
<br/>
## Requirements

