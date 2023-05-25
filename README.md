# Monty
Monty bytecode interpreter written in C, built to take in `.m` files as an argument and execute them.

## Table of Contents
- [Introduction](#introduction)
  - [What is Monty bytecode](#what-is-monty-bytecode)
  - [Structure of Monty bytecode files](#structure-of-monty-bytecode-files)
  - [What is the purpose of Monty bytecode](#What-is-the-purpose-of-Monty-bytecode)
  - [What is the purpose of the interpreter](#What-is-the-purpose-of-the-interpreter)
- [Compilation](#compilation)
- [Usage](#usage)
- [Opcodes](#opcodes)
  - [What is opcodes](#what-is-opcodes)
  - [Opcode-usage](#Oopcode-usage)
  - [Opcode-example](#Oopcode-example)
  - [current opcodes](#current-opcodes)
- [Files](#files)

## Introduction

### What is Monty bytecode
Monty bytecode is a set of instructions that are executed by the Monty interpreter. Monty is a scripting language that is first compiled into Monty byte codes. The Monty bytecode is made up of special instructions, and each line contains no or just one instruction. The instructions are in the form of various operations that can be performed on stacks or queues.

### Structure of Monty bytecode files
Monty bytecode files usually have the `.m` extension, and they can contain blank lines (empty or made of spaces only). Any additional text after the opcode or its required argument is not taken into account. The Monty interpreter reads each line and performs the specific operation on a given stack or queue.

### What is the purpose of Monty bytecode
The purpose of Monty bytecode is to provide a set of instructions that can be executed by the Monty interpreter. Monty is a scripting language that is first compiled into Monty byte codes. The Monty bytecode is made up of special instructions, and each line contains no or just one instruction. The instructions are in the form of various operations that can be performed on stacks or queues. The goal of the Monty project is to create an interpreter for Monty bytecode files. The interpreter takes a file as an argument, opens the file, and reads the instructions in the file, line by line. For each line read, the interpreter executes the instructions on that line. The Monty bytecode interpreter can be implemented in C, and the bytecode instructions can be broken down into simple parts to make the implementation easier. The Monty bytecode instructions can be used to manipulate a unique stack, with specific instructions to manipulate it.

### What is the purpose of the interpreter
The interpreter takes a file as an argument, opens the file, and reads the instructions in the file, line by line. For each line read, the interpreter executes the instructions on that line.

## Compilation
How to compile the interpreter:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

## Usage
Run the interpreter:

```bash
$ ./monty MONTY_FILE
```

## Opcodes

### What is opcodes
Opcodes are special instructions that are part of the Monty bytecode. The Monty bytecode is made up of special instructions, and each line contains no or just one instruction. The instructions are in the form of various operations that can be performed on stacks or queues. These instructions are called opcodes, and they can be used to manipulate a unique stack, with specific instructions to manipulate it. The Monty interpreter reads each line and performs the specific operation on a given stack or queue.

### Opcode usage
**`opcode <argument>`**

### Opcode example
```
push 5
push 22
pall
pop
pall
push 77
pchar
```

### Current opcodes:
|Opcode|Description|
|---|---|
|push|Adds a new node at the beginning of the stack/queue.|
|pop|Deletes the first node of the stack.|
|add|Adds the top two elements of the stack.|
|sub|Subtracts the top element of the stack from the second top element of the stack.|
|mul|Multiplies the second top element of the stack with the top element of the stack.|
|div|Divides the second top element of the stack by the top element of the stack.|
|mod|Computes the rest of the division of the second top element of the stack by the top element of the stack.|
|swap|Swaps the top two elements of the stack.|
|rtol|Rotates the stack to the top.|
|rotr|Rotates the stack to the bottom.|
|queue|Change a stack to a queue.|
|stack|Change a queue to a stack.|
|pall|Prints all the elements of the stack.|
|pint|Prints the value at the top of the stack, followed by a new line.|
|pchar|Prints the char at the top of the stack, followed by a new line.|
|pstr|Prints the string starting at the top of the stack, followed by a new line.|
|nop|Doesn’t do anything.|

## Files
|File|Description|
|---|---|
|[basic_linked_list_functions.](basic_linked_list_functions.c)|Contains the functions needed to add elements, remove elements and free a doubly linked list.|
|[calculations.c](calculations.c)|Contains *add*, *sub*, *mul*, *div* and *mod* opcodes.|
|[execute.c](execute.c)|Dispatches the line received from the main function to the function behind the opcode.|
|[getline.c](getline.c)|Reads an new line from a file.|
|[helpers.c](helpers.c)|Contains helper functions to deal with a strings.|
|[main.c](main.c)|Entry point of the interpreter. Feeds a line at a time to execute.|
|[monty.h](monty.h)|Prototypes functions and headers.|
|[move_elements_functions.c](move_elements_functions.c)|Contains *swap*, *rotr* and *rotr* opcodes.|
|[nopandqueue.c](nopandqueue.c)|Contains *nop*, *stack* and *queue* opcodes.|
|[print_functions.c](print_functions.c)|Contains *pint*, *pall*, *pchar* and *pstr* opcodes.|
|[push_and_pop.c](push_and_pop.c)|Contains *push* and *pop* opcodes.|
