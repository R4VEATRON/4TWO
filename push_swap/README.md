*This project has been created as part of the 42 curriculum by aelsafi.*

# Push_swap

## Description

The **push_swap** project is an algorithmic challenge whose goal is to sort a stack of integers using a limited set of instructions and the smallest possible number of operations.

The program receives a list of unique integers, stores them in stack **a**, and must output a sequence of instructions that sorts the stack in ascending order using a second stack **b**.  
This project focuses on algorithm design, complexity optimization, and rigorous handling of edge cases while respecting the constraints of the 42 Norm.

---

## Instructions

### Files

Mandatory files:
- Makefile
- *.c
- *.h

Bonus files (if implemented):
- checker program source files

### Program Name

push_swap

### Compilation

The project must compile using the following flags:

cc -Wall -Wextra -Werror

The Makefile must contain at least the following rules:
- NAME
- all
- clean
- fclean
- re

### Execution

./push_swap <list_of_integers>

Example:
./push_swap 2 1 3 6 5 8

### Behavior

- Stack **a** is initialized with the given integers (first argument is at the top)
- Stack **b** starts empty
- The program outputs a list of instructions, each followed by a newline
- If no arguments are given, the program outputs nothing
- In case of error, the program prints "Error" followed by a newline on standard error

Errors include:
- Non-integer arguments
- Integer overflow
- Duplicate values
- Invalid input format

---

## Allowed Operations

- sa : swap the first two elements of stack a
- sb : swap the first two elements of stack b
- ss : sa and sb simultaneously
- pa : push the top element of stack b onto stack a
- pb : push the top element of stack a onto stack b
- ra : rotate stack a upwards
- rb : rotate stack b upwards
- rr : ra and rb simultaneously
- rra : reverse rotate stack a
- rrb : reverse rotate stack b
- rrr : rra and rrb simultaneously

---

## Algorithm Explanation and Justification

The algorithm adapts its strategy depending on the number of elements to sort.

Algorithm overview:

1. Parse and validate all input arguments
2. Reject invalid input, duplicates, or integer overflows
3. Assign indexes to values based on sorted order to simplify comparisons
4. Use optimized hardcoded strategies for very small stacks (2 to 5 elements)
5. For larger stacks:
   - Push elements from stack a to stack b using a cost-based or chunk-based approach
   - Choose moves that minimize the total number of operations
6. Push elements back from stack b to stack a in sorted order
7. Rotate stack a so the smallest element is at the top

Justification:

- Indexing reduces comparison complexity
- Separating small and large cases minimizes unnecessary operations
- Cost-based decisions significantly reduce total instruction count
- The algorithm meets the benchmark constraints required for project validation

---

## Benchmark

To validate the project:

- Sort 100 random numbers in fewer than 700 operations
- Sort 500 random numbers in fewer than 5500 operations

Minimum validation is achieved with higher, but still limited, operation counts as defined in the subject.

---

## Bonus Part

The bonus consists of implementing a **checker** program.

Checker behavior:
- Takes the initial stack as arguments
- Reads instructions from standard input
- Executes them on the stacks
- Displays:
  - "OK" if stack a is sorted and stack b is empty
  - "KO" otherwise
  - "Error" in case of invalid input or instructions

The bonus part is evaluated only if the mandatory part is fully correct and all benchmarks are passed.

---

## Resources

- Stack data structure: https://en.wikipedia.org/wiki/Stack_(abstract_data_type)
- Algorithm complexity: https://en.wikipedia.org/wiki/Analysis_of_algorithms
- Official 42 subject PDF and intranet documentation

### AI Usage

AI tools were used exclusively for understanding project requirements, clarifying algorithmic concepts, and structuring documentation.  
All parsing logic, algorithm design, optimization choices, and code implementation were done manually and fully understood, in compliance with the 42 AI usage policy.
