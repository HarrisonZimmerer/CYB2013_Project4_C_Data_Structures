[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=14600524&assignment_repo_type=AssignmentRepo)

# Project 4 in CYB 2013

For this project, you will complete C code using the starter code specified in `c_structs_arrays.c`.

Note that there is no autograder, instead, you should commit and push your output from running the C code into github. I will compare your output to the sample output that is currently in the repository. Your output should match exactly the output in the solution code. The only exception is that the array addresses when printed will be different.

The tasks are outlined in the starter code. Here is a summary.

There are two primary objectives. First is to work with arrays, second is to work with data structures. 

## Array Tasks

Here you will insert code in the main() method that implements what is specified in comments. Specifically, you will create an array with 5 values in it, along with an array of pointers to the corresponding addresses. You'll print both out.

Next you will implement a function called inc_arr, which will increase the supplied array values by the constant increment specified in the function parameter.

Back in the main code, you will invoke that function to increment the 5-element array by 8, then print out the resulting change in values. Again, you should match the output specified in the solution output file.

## Struct Tasks

The starter code has implemented a very basic data structure representing CVEs, including the severity score (CVSS), ID, and brief description.

You have to implement two methods `create_cve`` and `print_cve`. You do NOT need to modify any code inside the `main()` method for this part of the assignment.

For `create_cve`, you take as input values for each of the struct attributes (CVSS, ID and description). Your job is to create a CVE struct that assigns those values and returns the populated struct. Note that you must enforce boundary checking on the character arrays for both ID and description. According to the struct, cveid should have a max of 16 characters (including the ending null character), while description should have a max of 101 characters including the null character. If a string is submitted that is longer, you should print an error message as shown in the sample output file AND populate these variables with appropriate cutoff (i.e., the first 100 characters of description and the first 15 characters of the ID).

## Linked List Tasks

In addition to the array and struct tasks, you are also required to implement a linked list in C. This should be implemented in a separate file named `linked_list.c`. We will supply a header file named `linked_list.h`.

You will create a struct for the linked list node. Each node will contain an integer value and a pointer to the next node. 

You will implement the following functions:

- `create_node(int value)`: This function will create a new node with the given value and return a pointer to the node.
- `insert_node(Node* head, Node* new_node)`: This function will insert a new node at the end of the linked list.
- `print_list(Node* head)`: This function will print all the values in the linked list.
- `free_list(Node* head)`: This function will free all the memory allocated for the linked list.

## Compiling

Your `c_structs_arrays.c` program will be straightforward to compile, but the linked list program is a little different.

In order to test your `linked_list.c` program, a driver program main.c has been created for you. Since the driver program relies on `linked_list.c`, you can compile them together like below:

```
gcc -o linked_list_main main.c linked_list.c
```

You should be able to run the the main.c program and compare the output to `linked_list_main_solution_output.txt`:

```
./linked_list_main
```
