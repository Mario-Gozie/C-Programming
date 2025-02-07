#include <stdio.h>
#include <ctype.h>


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

// There are long int (32bits) which is takes more integers than the normal int (16bits) and then the long log int even takes more than the long int (64bits). long long int are used when precision and range is critical such as in scientific or mathematical computations or when dealing with large numbers.

// <stdubt.h> it helps to maintain consistent size on tiegers accross different platforms

//int8_t = signed 8-bit integer, uint8_t = unsigned 8-bit integer
// int16_t and uint16_t signed 16-bit integer and unsigned 16-bit integer
// int32_t and uint32_t signed and unsigned 32-bit integer
// int64_t and uint64_t signed and unsigned 64-bit integer
// intptr_t and uintptr_t  integer capable of holding pointer and unsigned integer capable of holding pointer

long long int bigNumber;

int main(){
    


    long long int myLargeNumber = 1234567890123456789LL;

    float myfloat = 3.14f; // this f at the end is very important so that the computer will know you are talking about float. if you don't the computer will treat it as double
    double myDouble = 3.141592653589793;
    
    // Scientific notation
    float scientificFloat = 2.5e3; // 2.5 * 10^3
    double scientficDouble = 1.23e-4; // 1.23 * 10^(-4)

    // Strings and Characters. Characters are represented with a single quotation mark while strings are represented with double quotation mark.

    char mychar = 'a';
    char myString[] = "Hello World"; // The hard brackets are needed when you want to specify a particular size to the string. This is because a string is an array of characters.

    if(isalpha(mychar)){
        // Checking if a value is a string
        printf("%c is digit\n", mychar);

    }

    if(isdigit(mychar)){
        // Checking if a value contain a digit
        printf("hello");
    }

    char uppercaseChar = toupper(mychar); // converting a character to upper case


    // ARITHEMETIC OPERATIONS
    int a = 10, b = 4;

    // ADDITION + 
    int result_add = a + b;

    // SUBTRACTION

    int result_sub = a - b;

    // MULTIPLICATION

    int result_mul = a * b;

    // DIVISION

    float result_div = (float)a/b; // Ensure that atlease one operand is float

    int result_mod = a % b;

    // Increment and Decrement

    int counter = 5;
    counter ++;


    // TYPE CONVERSION

    // This can be done manually (explicitly) or automatically (implicitly)

    // IMPLICIT CONVERSION

    // int intValue = 10;
    // float floatValue = intValue;

    // Type promotion is a situation where by a value is coverted to a higher datatype while type demotion is a situation where a datatype is converted to a lower data type.

    int j = 5;
    double k =  10.5;
    double result = j + k; // There is type promotion here for the variable "a" to double befor addition

    // it is important to note that during type demotion, there may be loss in precision. for example when moving from double to int or float.

    // EXAMPLES OF CONVERSIONS (IMPLICIT AND EXPLICIT)

    // IMPLICIT

    int floatValue = 10;
    float intValue2 = floatValue;
    printf("Implicit Conversion: %f\n", intValue2);

    // EXPLICIT
    float floatValue2 = 15.75;
    int intValueconvert = (int)floatValue2;
    printf("Implicit Conversion: %d\n", intValueconvert);


    // FUNCTIONS
    // function can be defined outside the main and called in the main. please note that you must define a function before you call it.

    int add(int a, int b){
        return a + b;
    }

    int sum = add(5, 3);
    printf("sum = %d\n", sum);


    ///////   WORK ON POINTERS AND UNDERSTAND IT VERY WELL TONIGHT
    // The "&" sign represents address and pointers during creation starts it's name with "*" sign which represent the value when calling with the pointer name. There can be pointer of ponters, and in this case, we have to use "**"
    int a = 10;



    



    // FORMATING OUTPUT.

    // Integers are printed with "%d or %i"
    // floats are printed with "%f"
    // character are printed with "%c"
    // Strings are printed with "%s"

    // YOU CAN ALSO SPECIFY WITH AND PRECISION
    // %5d for Minimum of 5 characters
    // "%.2f" for Two digits after the decimal point

    // JUSTIFICATION

    int numx = 42;
    printf("Left-Justify: %-5d\n", numx); // This means put the output on the left with a total of 5 spaces which means after the integer 42 there would be three spaces

    // OCTAL REPRESENTATION
    int numy = 42;
    printf("Octal: %o\n", numy); // THIS WILL PRINT DECIMAL NUMBER IN BASE 10

    // HEXADECIMAL REPRESENTATION
    int numz = 42;
    printf("Hexadecimal: %x\n", numz);

    // %u UNSIGNED DECIMAL
    unsigned int numj = 42;
    printf("Unsigned Decimal: %u\n", numj);

    // EXCAPE SEQUENCE
    printf("Line 1\nLine 2\n");

    // \t Tab
    printf("Column 1\tColumn 2\n");


    printf("Addition: %d\n", result_add);
    printf("Subtraction: %d\n", result_sub);
    printf("Multiplication: %d\n", result_mul);
    printf("Division: %f\n", result_div);
    printf("Modulus: %d\n", result_mod);
    printf("counter %d\n", counter);

    


    printf("Uppercase %c\n", uppercaseChar);
    printf("Float: %f\n", myfloat );
    printf("Double: %lf\n", myDouble );
    printf("Large Number %lld\n", myLargeNumber);


    return 0;
}

