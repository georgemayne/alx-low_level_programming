0. Write a script that runs a C file through the preprocessor and save the result into another file.
	i. The C file name will be saved in the variable $CFILE
	ii. The output should be saved in the file c
1. Write a script that compiles a C file but does not link.
	i. The C file name will be saved in the variable $CFILE
	ii. The output file should be named the same as the C file, but with the extension .o instead of .c.
2. Write a script that generates the assembly code of a C code and save it in an output file.
	i. The C file name will be saved in the variable $CFILE
	ii. The output file should be named the same as the C file, but with the extension .s instead of .c.
3. Write a script that compiles a C file and creates an executable named cisfun.
	i. The C file name will be saved in the variable $CFILE
4. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
	i. Use the function puts
	ii. You are not allowed to use printf
	iii. Your program should end with the value 0
5. Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
	i. Use the function printf
	ii. You are not allowed to use the function puts
	iii. Your program should return 0
	iv. Your program should compile without warning when using the -Wall gcc option
6. Write a C program that prints the size of various types on the computer it is compiled and run on.
	i. You should produce the exact same output as in the example
	ii. Warnings are allowed
	iii. Your program should return 0
	iv. You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
7. Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
	i. The C file name will be saved in the variable $CFILE.
	ii. The output file should be named the same as the C file, but with the extension .s instead of .c.
8. Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
	i. You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
	ii. Your program should return 1
	iii. Your program should compile without any warnings when using the -Wall gcc option
