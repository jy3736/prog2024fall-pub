# Multiplication Table Generator Assignment

## Overview
This assignment involves writing a C++ program that generates a multiplication table based on user input. The program reads the number of rows and columns, and then it prints a formatted multiplication table.

## Instructions

1. **Write the Code**:
   - Create a C++ file named `main.cpp`.
   - Write a program that reads two integers from the user: the number of rows and columns for the multiplication table.

2. **Save the File**:
   - Ensure that your completed code is saved in a file named `main.cpp`.

3. **Compile the Program**:
   - Use the following command in your terminal or command prompt to compile your code:
     ```bash
     g++ -o main main.cpp
     ```

4. **Run the Program**:
   - After compiling, run the program with the following command:
     ```bash
     ./main
     ```

5. **Input**:
   - The program should read two integer inputs directly: the number of rows and the number of columns. No prompt strings should be displayed.

6. **Output**:
   - The program will output a multiplication table with the specified number of rows and columns. Each cell in the table should be left-aligned with a width of 5 characters.

## Example

### Example 1:
```bash
prob01>$ g++ -o main main.cpp 
prob01>$ ./main
9 9
1    2    3    4    5    6    7    8    9    
2    4    6    8    10   12   14   16   18   
3    6    9    12   15   18   21   24   27   
4    8    12   16   20   24   28   32   36   
5    10   15   20   25   30   35   40   45   
6    12   18   24   30   36   42   48   54   
7    14   21   28   35   42   49   56   63   
8    16   24   32   40   48   56   64   72   
9    18   27   36   45   54   63   72   81   
prob01>$ ./main
5 3
1    2    3    
2    4    6    
3    6    9    
4    8    12   
5    10   15   
prob01>$ 
```
