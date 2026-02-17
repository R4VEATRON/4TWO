*This project has been created as part of the 42 curriculum by aelsafi.*

# Push_swap

## Description

Push_swap is an algorithmic sorting project where the objective is to sort a stack of unique integers using two stacks (a and b) and a restricted set of allowed operations. The goal is not only to sort the numbers in ascending order but to do so using the smallest possible number of instructions.

The program must compute and display the shortest possible sequence of valid stack operations that result in a sorted stack a, with the smallest number positioned at the top.

This project emphasizes algorithm design, computational complexity, optimization strategies, parsing robustness, and strict memory management in C while complying with the 42 Norm.

---

## Instructions

### Program Name

push_swap

### Files to Submit

- Makefile  
- *.c  
- *.h  

### Makefile Requirements

The Makefile must:

- Compile using: -Wall -Wextra -Werror  
- Contain the rules: NAME, all, clean, fclean, re  
- Not relink unnecessarily  

### Compilation

cc -Wall -Wextra -Werror *.c

### Execution

./push_swap <list_of_integers>

Example:

./push_swap 2 1 3 6 5 8

### Behavior Rules

- Stack a is initialized with the given integers (first argument is at the top)
- Stack b starts empty
- The program prints a list of instructions separated by newline characters
- If no arguments are given, the program prints nothing
- In case of error, the program prints "Error" followed by a newline on standard error

### Error Cases

- Non-integer arguments
- Integer overflow
- Duplicate numbers
- Invalid formatting

---

## Allowed Operations

- sa : swap the first two elements of stack a  
- sb : swap the first two elements of stack b  
- ss : perform sa and sb simultaneously  
- pa : push the top element of stack b onto stack a  
- pb : push the top element of stack a onto stack b  
- ra : rotate stack a upwards (first element becomes last)  
- rb : rotate stack b upwards  
- rr : perform ra and rb simultaneously  
- rra : reverse rotate stack a  
- rrb : reverse rotate stack b  
- rrr : perform rra and rrb simultaneously  

---

## Algorithm Explanation and Justification

The algorithm adapts depending on the number of elements to sort.

1. Parsing and validation:
   - Parse all arguments
   - Detect duplicates and integer overflow
   - Handle errors correctly

2. Indexing:
   - Replace values with their sorted indexes to simplify comparisons

3. Small stack handling:
   - For stacks of size 2–5, apply optimized hardcoded instruction sequences
   - Guarantees minimal operations

4. Large stack strategy:
   - Divide elements into chunks or calculate movement costs
   - Push elements from stack a to stack b strategically
   - Minimize rotations by calculating optimal move combinations
   - Reinsert elements from stack b back to stack a in sorted order

5. Final alignment:
   - Rotate stack a until the smallest element is at the top

Justification:

- Indexing reduces comparison complexity
- Separating small and large cases ensures optimal performance
- Cost-based or chunk-based strategies minimize total operations
- The algorithm satisfies benchmark constraints required for full validation

---

## Benchmark Requirements

For full validation (100%):

- 100 numbers sorted in fewer than 700 operations  
- 500 numbers sorted in fewer than 5500 operations  

For minimal validation:

- 100 numbers under 1100 operations and 500 numbers under 8500 operations  
- OR other accepted combinations defined in the subject  

All benchmarks are verified during evaluation.

---

## Submission and Evaluation

- Only files inside the Git repository are evaluated
- File names must match required names exactly
- Memory leaks, crashes, or norm errors result in failure
- During evaluation, small modifications may be requested to verify understanding

---

## Resources

- Stack (abstract data type): https://en.wikipedia.org/wiki/Stack_(abstract_data_type)  
- Algorithm complexity analysis: https://en.wikipedia.org/wiki/Analysis_of_algorithms  
- Official 42 subject and intranet documentation  

### AI Usage

AI tools were used only for clarification of project requirements, reviewing algorithmic concepts, and structuring documentation. All parsing logic, data structure implementation, sorting strategy design, and optimization decisions were implemented manually and fully understood, in accordance with 42 AI usage guidelines.
