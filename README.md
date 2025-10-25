# CYB-2013 Project 4 — Cooking with C Data Structures

## Objective

This project focused on deepening proficiency in the C programming language through practical exercises involving arrays, structures, and linked lists.
The assignment emphasized manual memory management, pointer manipulation, and modular design — critical skills for systems programming and secure software development.

By implementing custom data structures and simulating real-world scenarios (such as managing cybersecurity vulnerability data), this project built a foundation in low-level data handling, memory safety, and program organization.

---

## Skills Learned

* Implementing and manipulating arrays and pointer arrays in C
* Creating and managing custom structs for complex data representation
* Designing and traversing linked lists using dynamic memory allocation
* Performing boundary and input validation for safer code
* Strengthening understanding of memory addresses and pointer arithmetic
* Compiling and linking multi-file C programs

---

## Tools Used

* GCC (GNU Compiler Collection)
* GDB (GNU Debugger)
* Linux terminal environment
* C standard library (`stdio.h`, `stdlib.h`, `string.h`)

---

## Project Overview

### Part 1: Arrays and Pointer Manipulation

Developed code to:

* Initialize an array of integers and a parallel array of pointers referencing each element’s memory address
* Print both values and their memory locations
* Implement and invoke the `inc_arr()` function to increment each array element by a specified constant
* Display updated array values after modification

---

### Part 2: Structs — The CVE Tracker

Implemented a `struct CVE` representing cybersecurity vulnerabilities, including:

* CVSS severity score (float)
* CVE ID (string, max 16 chars)
* Description (string, max 101 chars)

Created two key functions:

* `create_cve()` — Initializes and returns a new CVE struct, validating string lengths and printing error messages if input exceeds limits.
* `print_cve()` — Outputs formatted CVE data to the console.

Example output includes both valid and truncated CVE entries to demonstrate error handling and boundary enforcement.

---

### Part 3: Linked List Implementation

Implemented a modular **singly linked list** in `linked_list.c` and `linked_list.h` that supports dynamic insertion, traversal, and cleanup.

#### Implemented Functions

| Function                                                 | Description                                                        |
| -------------------------------------------------------- | ------------------------------------------------------------------ |
| `create_node(int value)`                                 | Allocates and returns a new node containing the specified integer. |
| `insert_node(struct Node** head, struct Node* new_node)` | Inserts a node at the end of the linked list.                      |
| `print_list(struct Node* head)`                          | Prints all values in the linked list in order.                     |
| `free_list(struct Node** head)`                          | Frees all dynamically allocated nodes and resets the head pointer. |


## What I Learned

* How data is represented and manipulated at the memory level in C
* Proper handling of strings and input boundaries to prevent overflows
* The structure and traversal of linked lists using pointers
* Efficient modular design across multiple C source files
* Core debugging and compilation techniques using GCC and GDB

---

## Credits

* Project provided by: University of Tulsa — CYB-2013: Secure Software Development 2
* Instructor: Dr. Pei


