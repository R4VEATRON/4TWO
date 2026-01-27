*This project has been created as part of the 42 curriculum by aelsafi.*

# Get Next Line

## Description

The get_next_line project consists of implementing a function in C that reads and returns one line at a time from a given file descriptor. Each call to the function returns the next line until the end of the file is reached or an error occurs.

This project focuses on understanding static variables, efficient file reading using the read() system call, and precise memory management while respecting the constraints of the 42 Norm.

---

## Instructions

### Mandatory Files

- get_next_line.c
- get_next_line_utils.c
- get_next_line.h

### Function Prototype

char *get_next_line(int fd);

### Compilation

The project must compile with the following flags:

cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

- BUFFER_SIZE defines the number of bytes read per read() call
- The project must compile and function correctly with or without the -D BUFFER_SIZE flag
- Any positive value of BUFFER_SIZE must be supported

### Behavior

- Repeated calls to get_next_line() read a file descriptor line by line
- The returned line includes the terminating newline character (\n), except when the end of file is reached and no newline exists
- Returns NULL when there is nothing left to read or if an error occurs
- Works with files and standard input
- Forbidden functions and features include lseek(), global variables, and libft

---

## Algorithm Explanation and Justification

The implementation uses a static buffer (stash) to store data read from the file descriptor that has not yet been returned as a line.

Algorithm steps:

1. Read up to BUFFER_SIZE bytes from the file descriptor using read()
2. Append the read data to the static stash
3. Continue reading until a newline character is found or end-of-file is reached
4. Allocate and return a line containing characters up to and including the newline
5. Update the stash by removing the returned line and keeping any remaining data
6. If end-of-file is reached and data remains without a newline, return it as the final line
7. If no data remains, return NULL

Justification:

- Static variables preserve unread data between function calls without using global variables
- Reading only until a newline avoids unnecessary reads and improves efficiency
- Dynamic memory allocation ensures exact memory usage per returned line
- Careful memory handling prevents leaks and undefined behavior
- The algorithm works correctly for all valid BUFFER_SIZE values

---

## Bonus Part

The bonus version of get_next_line:

- Uses only one static variable
- Supports multiple file descriptors simultaneously

This allows alternating calls between different file descriptors without losing their respective reading states.

Bonus files:

- get_next_line_bonus.c
- get_next_line_utils_bonus.c
- get_next_line_bonus.h

---

## Resources

- man 2 read
- Static variables in C: https://en.wikipedia.org/wiki/Static_variable
- Official 42 documentation and subject PDF

### AI Usage

AI tools were used only for understanding the subject requirements and structuring the documentation. All code logic, implementation, and debugging were performed manually in accordance with the 42 AI usage policy.