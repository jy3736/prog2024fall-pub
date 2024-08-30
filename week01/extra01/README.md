# Triangle Shape Generator

## Overview
This program generates an `n`-level triangle shape using a specified character. The triangle can be displayed in four different modes: left-aligned, right-aligned, reversed left-aligned, and reversed right-aligned.

## How to Use

1. **Compile the Program**:
   - Use the following command in your terminal or command prompt to compile the code:
     ```bash
     g++ -o main main.cpp
     ```

2. **Run the Program**:
   - After compiling, run the program with the following command:
     ```bash
     ./main
     ```

3. **Input**:
   - The program expects three inputs:
     1. An integer `n` that specifies the number of levels in the triangle.
     2. A character `ch` that will be used to draw the triangle.
     3. An integer `mode` that determines the alignment and orientation of the triangle:
        - `1`: Left-aligned triangle.
        - `2`: Right-aligned triangle.
        - `3`: Reversed left-aligned triangle.
        - `4`: Reversed right-aligned triangle.

4. **Output**:
   - Based on the input mode, the program will output a triangle using the specified character.

## Example

```bash
extra01>$ g++ -o main main.cpp 
extra01>$ ./main
5 * 2
    *
   **
  ***
 ****
*****
extra01>$ ./main
4 4 4
4444
 444
  44
   4
extra01>$ ./main
6 % 1
%
%%
%%%
%%%%
%%%%%
%%%%%%
extra01>$ ./main
5 + 3
+++++
++++
+++
++
+
extra01>$ 
```