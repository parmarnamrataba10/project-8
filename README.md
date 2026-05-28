

Question 1: https://onlinegdb.com/kE8XdLb_Y     and  Question 2 : https://onlinegdb.com/hAAOVBtom

Description :
This program finds the length of a string using a pointer.
The user enters a string, and the pointer moves through each character
until the null character ('\0') is found.

Concepts Used :
1. Pointer
2. String
3. While Loop
4. fgets()

Algorithm :
1. Declare a string and pointer variable.
2. Take string input from user using fgets().
3. Assign pointer to the string.
4. Traverse the string using pointer.
5. Increase length count until '\0' is found.
6. Print the length of the string.

Output Example :
Enter any string: hello



Question 2 :

Description :
This program finds the cube of all elements of a 2D array
using Pointer and User Defined Function (UDF).

Concepts Used :
1. Pointer
2. User Defined Function (UDF)
3. 2D Array
4. Nested Loop

Algorithm :
1. Enter the size of array.
2. Input elements of 2D array.
3. Pass each array element address to cube() function.
4. cube() function calculates cube using pointer.
5. Store updated value in same array.
6. Print cube of all array elements.

Function Used :
cube(int *p)
- Receives address of element.
- Calculates cube using pointer.
- Updates original value.

Output Example :

Enter array size: 2

Enter array elements:
a[0][0] = 1
a[0][1] = 2
a[1][0] = 3
a[1][1] = 4
