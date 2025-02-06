#include <stdio.h>


// Data types
// int = integer
// float = floating point number (decimals). this is typically 4bytes(32bits), so it has precision of about 7 decimal digits. used for storing smaller size of numbers.
// double = This is for decimal but 4bytes (64bits). it has a precision of about 15 decimal digits. so it is good for large size numbers
// Char = A single character
// Array = collection of elements of the same data type.
// pointer = stores memory address of another variabe.
// structure = allows grouping variable of different data type under a single name.
// union = similar to structure but shares the same memory location for all its members.
// enum = Defines a set of named integer constant


// In C, you must declare the data type of a variable before you use it
int age;
float salary;
char grade;

// Initialization of variables 
// Variable names must start with a letter or an underscore after the first letter, you can now have letters, digits, and underscore
// Variable names are case-sensitive
// Certain keywords are reserved and cannot be used as a variable name
int count = 10;
float pi = 3.14;
char firstLetter = 'A';


// More on Datatypes

// There are long int (32bits) which is takes more integers than the normal int (16bits) and then the long log int even takes more than the long int (64bits). long long int are used when precision and range is critical such as in scientific or mathematical computations or when dealing with large numbers/

long long int bigNumber;

int main(){

    long long int myLargeNumber = 1234567890123456789LL;


    printf("Large Number %lld\n", myLargeNumber);
    return 0;
}

