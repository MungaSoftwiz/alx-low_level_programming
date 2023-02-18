# 0x00-hello_world

This directory contains programs written in C as part of the Low Level
Programming section of the curriculum. These programs serve as an introduction
to the C programming language and demonstrate basic concepts such as
compilation, linking, and the use of standard input and output.


## Files

### Mandatory tasks
* [0. Preprocessor](./0-preprocessor) - a script that runs a C file through
 the preprocessor and save the result into another file.

* [1. Compiler](./-1-compiler) - a script that compiles a C file but does not
 link.

* [2. Assembler](./2-assembler) -  a script that generates the assembly code of
 a C code and save it in an output file.

* [3. Name](./3-name) -  a script that compiles a C file and creates an
 executable named 'cisfun'.

* [4. Hello, puts](./4-puts.c) - C program that prints exactly '"Programming is
 like building a multilingual puzzle,' using the printf function.

* [5. Hello, printf](./5-printf.c) - program that prints exactly 'with proper
  grammar, but the outcome is a piece of art' using the printf function.

* [6. Size is not grandeur, and territory does not make a nation](./size.c) - 
 program that prints the size of various types on the computer it is compiled
 and run on.

### Advanced tasks

* [7. Intel](./100-intel) -  a script that generates the assembly code
 (in Intel syntax) of a C code and saves it in an output file.

* [8. UNIX is basically a simple operating system, but you have to be a genius
to understand the simplicity](./101-quote.c) - a C program that prints exactly
 'and that piece of art is useful" - Dora Korpar, 2015-10-19', followed by a new
 line, to the standard error. 
  
### Usage

To run any of the scripts or programs in this directory, compile them with the
following command (replacing [file] with the name of the file you wish to compile):

	gcc -Wall -Werror -Wextra -pedantic [file] -o [output_file]

To run the resulting executable, type:

	./[output_file]

### Author

These programs were written by Boniface Munga for the Low Level Programming section
of the cirriculum at ALX Africa.
