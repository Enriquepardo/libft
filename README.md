 # 📚 Libft 📚

## 📌 Description

This project consists of programming a library in C. Your library will include a set of general-purpose functions that your programs will rely on.

## 📋 Project Objectives

- Understand how `libc` standard functions work and how to implement them from scratch.
- Improve C programming skills while adhering to strict coding standards.
- Learn how to manage dynamic memory and prevent memory leaks.
- Get familiar with basic tools such as `Makefile` and the use of header files.

## Project Contents

### Mandatory Part

1. **Libc Functions:**  
   Implementation of functions such as `strlen`, `strcpy`, `memset`, `atoi`, among others, following the original prototypes but with an `ft_` prefix.

2. **Additional Functions:**
   - `ft_substr`
   - `ft_strjoin`
   - `ft_strtrim`
   - `ft_split`
   - `ft_itoa`
   - Other useful functions for string and number manipulation.

### Bonus Part

Implementation of functions to work with linked lists using the `t_list` structure.

- Create nodes (`ft_lstnew`).
- Add nodes at the beginning or end (`ft_lstadd_front`, `ft_lstadd_back`).
- Delete nodes and entire lists (`ft_lstdelone`, `ft_lstclear`).
- Iterate and transform lists (`ft_lstiter`, `ft_lstmap`).

### Submitted Files

- **`libft.h`:** Header file containing the prototypes of all functions and necessary definitions.
- **`.c` files:** Implementation of each function.
- **`Makefile`:** Automates the compilation of the library with the following rules:
  - `make all`: Compiles the library.
  - `make clean`: Removes object files.
  - `make fclean`: Removes object files and the library.
  - `make re`: Cleans and recompiles everything.
  - `make bonus`: Compiles the bonus functions if implemented.

## 🚀 Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/Enriquepardo/Libft.git

2. Navigate to the project directory:
   ```bash
   cd libft
3. Compile the library:
   ```bash
   make
   ```
   ```bash
   cc -Wall -Werror -Wextra main.c (file).c -o my_program
   ```
   ```
   ./my_program
   ```

