# C++ Practice Programs

This workspace contains simple C++ practice programs focused on arrays, strings, and matrix operations.

## Files

- `2dsumofArray.cpp`
  - Reads two `m x n` matrices from the user.
  - Adds corresponding elements.
  - Prints the first matrix, second matrix, and the resulting sum matrix.

- `Transpose.cpp`
  - Reads an `m x n` matrix from the user.
  - Computes the transpose by swapping rows and columns.
  - Prints the original matrix and the transposed matrix.

- `SumofDiag.cpp`
  - Reads an `n x n` square matrix from the user.
  - Calculates the sum of the main diagonal elements.
  - Prints the matrix and the diagonal sum.

- `ArrayLength.cpp`
  - Reads a user name as a string.
  - Prints the name in reverse order.

- `charInArray.cpp`
  - Reads a string from the user.
  - Counts and prints the number of characters in the string.

- `Arraytasker.cpp`
  - Contains a function to print the squares of array elements.
  - Contains a function to compute the sum of an array.
  - Note: the program currently defines the helper functions but does not include a `main()` implementation.

- `paasByRef.cpp`
  - Reads the size and elements of an integer array.
  - Uses a function with pass-by-reference parameters to compute and print the sum of the array.

- `code.cpp`
  - This file is present in the workspace but its contents are not documented in this README.

## How to compile and run

Use a C++ compiler such as `g++`.

Example:

```bash
g++ 2dsumofArray.cpp -o 2dsumofArray
./2dsumofArray
```

Replace the file name with any other `.cpp` source file to compile it.

## Notes

- These files are simple learning examples and are intended for practice.
- Some programs use fixed-size arrays (`int arr[10][10]`) and assume dimensions do not exceed that limit.
- `Arraytasker.cpp` may require a `main()` function if you want to compile and run it as a complete program.
