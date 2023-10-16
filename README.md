# C++ Basic Operators

This repository contains examples and explanations of basic operators in C++. Operators are fundamental building blocks for performing operations on data in your C++ programs. This README provides an overview of commonly used operators in C++ and how to use them.

## Table of Contents
- [Operators](#operators)
  - [Arithmetic Operators](#arithmetic-operators)
  - [Comparison Operators](#comparison-operators)
  - [Logical Operators](#logical-operators)
  - [Assignment Operators](#assignment-operators)
  - [Increment and Decrement Operators](#increment-and-decrement-operators)
  - [Bitwise Operators](#bitwise-operators)
  - [Other Operators](#other-operators)
- [Algorithm](#algorithm)
- [Output](#output)

## Operators

### Arithmetic Operators

C++ provides various arithmetic operators for basic mathematical operations:

1. *Addition `+`*: Adds two operands together.
2. *Subtraction `-`*: Subtracts the second operand from the first.
3. *Multiplication ``**: Multiplies two operands.
4. *Division `/`*: Divides the first operand by the second.
5. *Modulus `%`*: Returns the remainder of the division.

### Comparison Operators

Comparison operators are used to compare two values:

1. *Equal `==`*: Checks if two values are equal.
2. *Not Equal `!=`*: Checks if two values are not equal.
3. *Greater Than `>`*: Checks if the left operand is greater than the right.
4. *Less Than `<`*: Checks if the left operand is less than the right.
5. *Greater Than or Equal To `>=`*: Checks if the left operand is greater than or equal to the right.
6. *Less Than or Equal To `<=`*: Checks if the left operand is less than or equal to the right.

### Logical Operators

Logical operators are used to perform logical operations:

1. *Logical AND `&&`*: Returns true if both operands are true.
2. *Logical OR `||`*: Returns true if at least one operand is true.
3. *Logical NOT `!`*: Returns the opposite of the operand's value.

### Assignment Operators

Assignment operators are used to assign values to variables:

1. *Assignment `=`*: Assigns the value on the right to the variable on the left.
2. *Addition Assignment `+=`*: Adds the right operand to the left operand and assigns the result to the left operand.
3. *Subtraction Assignment `-=`*: Subtracts the right operand from the left operand and assigns the result to the left operand.
4. *Multiplication Assignment `=`**: Multiplies the left operand by the right operand and assigns the result to the left operand.
5. *Division Assignment `/=`*: Divides the left operand by the right operand and assigns the result to the left operand.

### Increment and Decrement Operators

Increment and decrement operators are used to increase or decrease the value of a variable by 1:

1. *Increment `++`*: Increases the value of a variable by 1.
2. *Decrement `--`*: Decreases the value of a variable by 1.

### Bitwise Operators

Bitwise operators are used to manipulate individual bits in data:

1. *Bitwise AND `&`*: Performs a bitwise AND operation.
2. *Bitwise OR `|`*: Performs a bitwise OR operation.
3. *Bitwise XOR `^`*: Performs a bitwise XOR (exclusive OR) operation.
4. *Bitwise NOT `~`*: Inverts the bits of a value.
5. *Left Shift `<<`*: Shifts bits to the left.
6. *Right Shift `>>`*: Shifts bits to the right.

### Other Operators

C++ also provides other operators like the ternary operator `? :` and the pointer operator `->`. These operators have specific use cases and are explained in the examples section.


## ALGORITHM
### Enter Your PRN
1.It declares two integer variables prn and digit to store the PRN and individual digits, respectively.

2.It prompts the user to enter their PRN.

3.It enters a while loop that continues as long as prn is greater than 0.

4.Inside the loop:

5.It calculates the last digit of prn using the modulo operator (%) and assigns it to the digit variable.

6.It prints the digit on a new line.

7.It divides prn by 10 to remove the last digit.

8.The loop continues until all digits of the PRN have been extracted and printed.

### Enter marks of each subjects and find the grade based on average
1.It declares integer variables sub1, sub2, sub3, sub4, sub5 to store the marks of five subjects, and variables sum and average to store the sum of marks and the average, respectively.

2.It prompts the user to enter marks for each subject.

3.It calculates the sum of the marks from all five subjects.

4.It calculates the average by dividing the sum by 5.

5.It uses a series of if and else if statements to determine the grade based on the average:

6.If the average is greater than or equal to 90, it assigns the grade "O."

7.If the average is between 85 and 89, it assigns the grade "A+."

8.If the average is between 75 and 84, it assigns the grade "A."

9.If the average is between 65 and 74, it assigns the grade "B+."

10.If the average is between 55 and 64, it assigns the grade "B."

11.If the average is between 40 and 54, it assigns the grade "C."

12.If none of the above conditions are met, it assigns the grade "Student has failed."

13.It prints the grade based on the average.

## OUTPUT
exp3_1
  ![image](https://github.com/Pranav18062004/Cpp-Basic-Operators/assets/79793482/353d1bdb-0112-4e5a-b514-23e4777b7560)

exp3_2
  ![image](https://github.com/Pranav18062004/Cpp-Basic-Operators/assets/79793482/4e1cd860-652b-4984-b791-8c2b972af695)
