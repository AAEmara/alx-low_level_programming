# 0x00. C- Hello, World Project README

## Concepts grasped:
  - **Preprocessing:** How to use the gcc compiler for the
  **preprocessing** step, using the `-E` flag to have a preprocessed source
  code file as an output with no extensions.
  - **Preprocessing, Compilation, and Assembly :** How to use the gcc compiler
  to do **compilation without linking**, using the `-c` flag to have object
  files as an output with `.o` extension.
  - **Preprocessing, and Compilation:** How to use the gcc compiler to
  **generate an assembly file**, using the `-S` flag to have an assembly file
  with `.s` extension.
  - **Preprocessing, Compilation, Assembly and Linking:** How to use gcc
  compiler to create an executable file through an input source file,
  using the `-o` to control the name of the output.
  - **puts function:** A function that prints a string with a trailing newline
  to the `stdout`.
  - **printf:** A function that formats an output to the stdout.
  - **sizeof:** A function that retrieves the size of datatypes in C 
  programming language.
  - **-masm:** A flag used with the gcc compiler to output intel syntax
  assembly when combined with `-S` flag for `.s` file extensions.
  - **write:** A system call that can print a certain message to the mentioned
  file descriptor with a limited amount of characters, this system call is to
  be found in the `<unistd.h>` C-library.

## Questions for this Project:
### Question #0
  - What is the common extension for a C source file?
    - [ ] .py
    - [ ] .txt
    - [ ] .cpp
    - [x] .c

---

### Question #1:
  - Which of the following are both valid comment syntaxes in ANSI C,
  and Betty-compliant?
    - [x]
    ```
    /* Comment */
    ```
    - [ ]
    ```
    /* Comment /* nested */ */
    ```
    - [x]
    ```
    /*
     * Comment
     */
    ```
    - [ ]
    ```
    # Comment
    ```
    - [ ]
    ```
    /*
    Comment
    */
    ```
    - [ ]
    ```
    // Comment
    ```
---

### Question #2
  - What are the different steps to form an exectuable file from C source code
    - [ ] Preprocessing and compilation
    - [ ] Interpretation, compilation and assembly
    - [ ] Compilation and linking
    - [ ] Interpretation, assembly and compilation
    - [x] Preprocessing, compilation, assembly, and linking

---

### Question #3
  - In which category belongs the C programming language?
    - [ ] Interpreted language
    - [x] Compiled language

---

### Question #4
  - Which command can be used to compile a C source file?
    - [ ] bash
    - [ ] c-compiler
    - [x] gcc

---

### Question #5
  - What is the common for a C header file?
    - [ ] .ch
    - [ ] .header
    - [x] .h
    - [ ] .hpp
