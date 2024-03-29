
<p align="center">  
<img src ="https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png">
</p>

<h1 align="center">
	C is FUN
</h1>

>Learning C right now, been wanting to get on this. It's going to be FUN !!



----

## About
- This repository consists of all the C programming projects done with [ALX Africa](https://www.alxafrica.com/) Full stack Software Engineering course in partnership with [Holberton School](https://www.holbertonschool.com/).
- All main.c files are prewritten by the school. We build functions that produce a specific output while also taking into consideration edge cases.

----


## Content table

- [0x00](./0x00-hello_world) : Hello, World.
- [0x01](./0x01-variables_if_else_while) : Variables,if,else,while.
- [0x02](./0x02-functions_nested_loops) : Functions, nested loops.
- [0x03](./0x03-debugging) : Debugging.
- [0x04](./0x04-more_functions_nested_loops) : More Functions and nested loops.
- [0x05](./0x05-pointers_arrays_strings) : Pointers, arrays and strings.
- [0x06](./0x06-pointers_arrays_strings) : More pointers, arrays and strings.
- [0x07](./0x07-pointers_arrays_strings) : Even more pointers, arrays and strings.
- [0x08](./0x08-recursion) : Recursion.
- [0x09](./0x09-static_libraries) : Static libraries.
- [0x0A](./0x0A-argc_argv) : Argc, argv.
- [0x0B](./0x0B-malloc_free) : malloc, free.
- [0x0C](./0x0C-more_malloc_free) : more malloc, free.
- [0x0D](./0x0D-preprocessor) : Preprocessor.
- [0x0E](./0x0E-structures_typedef) : Structures, typedef.
- [0x0F](./0x0F-function_pointers) : Function pointers.
- [0x10](./0x10-variadic_functions) : Variadic functions.
- [0x11](https://github.com/KarimaTouhami/Printf) : Write our own printf project.
- [0x12](./0x12-singly_linked_lists) : Singly linked lists.
- [0x13](./0x13-more_singly_linked_lists) : More singly linked lists.
- [0x14](./0x14-bit_manipulation) : Bit manipulation.
- [0x15](./0x15-file_io) : File I/O.
- [0x16](https://github.com/KarimaTouhami/simple_shell) : Simple Shell.
- [0x17](./0x17-doubly_linked_lists) : Doubly linked lists.
----

## C Program Compilation

<p align="center">
  <img src="https://i.postimg.cc/rprHShJ1/C-compilation-process.gif" />
</p>

The compilation process has four different steps:
1. The preprocessing stage
2. The compiling stage
3. The assembling stage
4. The linking stage
    
### Step 1: Preprocessing `-E`
The preprocessor reads the source code and performs various transformations to it:
- Expanding macros (replacing all of the macros with their values)
- Handling include files (replaces the #include macro with the content of the header file specified in <>)
- Removing comments
- The results in a new file called a translation unit stored in a file with `.i` extension (intermediate)
    
### Step 2: Compiling `-S`
The build phase provides us with assembly code that is unique to the target architecture.

In this step the compiler takes action by taking a preprocessed file which checks for syntax or structure errors (in case of errors the compilation process stops and displays the corresponding errors). After compiling it, it generates an intermediate code in assembly language `file.s`.

### Step 3: Assembing `-c`
In the third stage of compilation, an assembler is used to convert assembly language into machine code. The assembler takes the code and generates an object file `file.o`, which contains machine code that is not yet executable because it needs to be mapped to a specific memory address. The linker combines all the object files, resolves references between modules, and corrects the addresses, creating an executable file.

### Step 4: Linking
The linker is an important tool in compilation that performs two tasks: resolution and relocation of symbols. It arranges the pieces of object code so that functions in one piece can successfully call functions in others. The linker also adds parts that contain the instructions for the library functions used by the program. The result of this stage is the executable file. usually `a.out` if `-o` is not specified.

## Author✍️

* **[Karima Touhami](https://www.linkedin.com/in/karima-touhami-5b14b4268/)** <[KarimaTouhami](https://github.com/KarimaTouhami)>

## Acknowledgements 📎

All the work featured in this project was undertaken as an integral part of the curriculum for the **ALX-SE** program. **ALX Africa** is a comprehensive online **full-stack software engineering program** that equips students with the necessary skills and knowledge to excel in the technology industry. The program follows a project-based approach, fostering collaborative learning among peers. By engaging in practical projects, students gain hands-on experience and develop the expertise required for a successful career in software engineering.




 For more information, visit [this link](https://www.alxafrica.com//).
