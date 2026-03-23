/*************************************C++ Operator Types*****************************************/

/* C++ operators are classified into 6 types on the basis of type of operation they perform:

1. Arithmetic Operators
Arithmetic operators are used to perform arithmetic or mathematical operations on the operands. For example, '+' is used for addition.

1.Addition(+)              -->Adds two operands
2.Subtraction(-)           -->Subtracts second operand from the first
3.Multiplication(*)        -->Multiplies two operands
4.Division(/)              -->Divides first operand by the second operand
5.Modulo(%)                -->Returns the remainder of an integer division
6.Increment(++)            -->Increases the value of operand by 1
7.Decrement(--)            -->Decreases the value of operand by 1

eg:--
        #include <iostream>
        using namespace std;

        int main() {
            int a = 8, b = 3;

            // Addition
            cout << "a + b = " << (a + b) << endl;
        
            // Subtraction
            cout << "a - b = " << (a - b) << endl;
        
            // Multiplication
            cout << "a * b = " << (a * b) << endl;
        
            // Division
            cout << "a / b = " << (a / b) << endl;
        
            // Modulo
            cout << "a % b = " << (a % b) << endl;
        
            // Increament
            cout << "++a = " << ++a << endl;
        
            // Decrement
            cout << "b-- = " << b--;
            
            return 0;
        }

-->output:
            a + b = 11
            a - b = 5
            a * b = 24
            a / b = 2
            a % b = 2
            ++a = 9
            --b = 2

>> a++: post-increment -->first use and then increment
>> ++a: pre-increment -->first increment and then use
>> a--: post-decrement -->first use and then decrement
>> --a: pre-decrement -->first decrement and then use

-->You may have noticed that some operator works on two operands while other work on one. On the basis of this operators are also classified as:
Unary: Works on single operand.
Binary: Works on two operands.
Ternary: Works on three operands.


2. Relational Operators
Relational operators are used for the comparison of the values of two operands

1.Is Equal to(==)               -->Checks if both operands are equal
2.Greater Than(>)               -->Checks if the first operand is greater than the second operand
3.Greater Than or Equal To(>=)  -->Checks if the first operand is greater than or equal to the second operand
4.Less Than(<)                  -->Checks if the first operand is lesser than the second operand
5.Less Than or Equal To(<=)     -->Checks if the first operand is lesser than or equal to the second operand
6.Not Equal To(!=)              -->Checks if both operands are not equal


eg:-
            #include <iostream>
            using namespace std;
            ​
            int main() {
                int a = 6, b = 4;
            ​
                // Equal operator
                cout << "a == b is " << (a == b) << endl;
            
                // Greater than operator
                cout << "a > b is " << (a > b) << endl;
            
                // Greater than Equal to operator
                cout << "a >= b is " << (a >= b) << endl;
            
                //  Lesser than operator
                cout << "a < b is " << (a < b) << endl;
            
                // Lesser than Equal to operator
                cout << "a <= b is " << (a <= b) << endl;
            
                // Not equal to operator
                cout << "a != b is " << (a != b);
            ​
                return 0;
            }


Output:-
            a == b is 0
            a > b is 1
            a >= b is 1
            a < b is 0
            a <= b is 0
            a != b is 1

Note: 0 denotes false and 1 denotes true.



3. Logical Operators
Logical operators are used to combine two or more conditions or constraints or to complement the evaluation of the original condition in consideration. The result returns a Boolean value, i.e., true or false.

Logical AND(&&) --> Returns true only if all the operands are true or non-zero
Logical OR(||)  --> Returns true if either of the operands is true or non-zero
Logical NOT(!)  --> Returns true if the operand is false or zero

eg:-
            #include <iostream>
            using namespace std;
            ​
            int main() {
                int a = 6, b = 4;
            ​
                // Logical AND operator
                cout << "a && b is " << (a && b) << endl;
            
                // Logical OR operator
                cout << "a || b is " << (a || b) << endl;
            
                // Logical NOT operator
                cout << "!b is " << (!b);
            ​
                return 0;
            }

Output:-
                a && b is 1
                a || b is 1
                !b is 0



4. Bitwise Operators
Bitwise operators  works on bit-level. So, compiler first converted to bit-level and then the calculation is performed on the operands.

Binary AND(&)       -->Copies a bit to the result if it exists in both operands
Binary OR(|)        --> Copies a bit to the result if it exists in any of the operands
Binary XOR(^)       --> Copies the bit to the result if it is present in either of the operands but not both
Left Shift(<<)      --> Shifts the value to the left by the number of bits specified by the right operand
Right Shift(>>)     --> Shifts the value to the right by the number of bits specified by the right operand
One's Complement(~) --> Changes binary digits 1 to 0 and 0 to 1

Note: Only char and int data types can be used with Bitwise Operators.

eg:-
            #include <iostream>
            using namespace std;
            ​
            int main() {
                int a = 6, b = 4;
            ​
                // Binary AND operator
                cout << "a & b is " << (a & b) << endl;
            ​
                // Binary OR operator
                cout << "a | b is " << (a | b) << endl;
            ​
                // Binary XOR operator
                cout << "a ^ b is " << (a ^ b) << endl;
            ​
                // Left Shift operator
                cout << "a << 1 is " << (a << 1) << endl;
            ​
                // Right Shift operator
                cout << "a >> 1 is " << (a >> 1) << endl;
            ​
                // One’s Complement operator
                cout << "~(a) is " << ~(a);
            ​
                return 0;
            }

output:-
            a & b is 4
            a | b is 6
            a ^ b is 2
            a<<1 is 12
            a>>1 is 3
            ~(a) is -7


5. Assignment Operators
Assignment operators are used to assign value to a variable. We assign the value of right operand into left operand according to which assignment operator we use.  

Assignment(=)               -->Assigns the value on the right to the variable on the left
Add and Assignment(+=)      -->Adds the right operand to the left operand and assigns the result to the left operand
Subtract and Assignment(-=) -->Subtracts the right operand from the left operand and assigns the result to the left operand
Multiply and Assignment(*=) -->Multiplies the left operand by the right operand and assigns the result to the left operand
Divide and Assignment(/=)   -->Divides the left operand by the right operand and assigns the result to the left operand

eg:-
                #include <iosteam>
                using namespace std;
                ​
                int main() {
                    int a = 6, b = 4;
                ​
                    // Assignment Operator.
                    cout << "a = " << a << endl;
                
                    //  Add and Assignment Operator.
                    cout << "a += b is " << (a += b) << endl;
                
                    // Subtract and Assignment Operator.
                    cout << "a -= b is " << (a -= b) << endl;
                
                    //  Multiply and Assignment Operator.
                    cout << "a *= b is " << (a *= b) << endl;
                
                    //  Divide and Assignment Operator.
                    cout << "a /= b is " << (a /= b);
                ​
                    return 0;
                }

Output:-
                a = 6
                a += b is 10
                a -= b is 6
                a *= b is 24
                a /= b is 6


6. Ternary or Conditional Operators
Conditional operator returns the value, based on the condition. This operator takes three operands, therefore it is known as a Ternary Operator.

Syntax: Expression1 ? Expression2 : Expression3

In the above statement: The ternary operator ? determines the answer on the basis of the evaluation of Expression1.
If Expression1 is true, then Expression2 gets evaluated.
If Expression1 is false, then Expression3 gets evaluated.

eg:-
            #include <iostream>
            using namespace std;
            ​
            int main() {
                int a = 3, b = 4;
            ​
                // Conditional Operator
                int result = (a < b) ? b : a;
                cout << "The greatest number "
                    "is " << result;
            ​
                return 0;
            }

Output:-
            The greatest number is 4



7.MISCELLANEOUS OPERATORS

1. sizeof Operator
Definition: sizeof is a unary operator used to determine the size of a variable or data type in bytes.

Syntax:
sizeof(type);
sizeof(variable);
Example:
int x;
cout << sizeof(x);   // usually 4
cout << sizeof(char); // always 1


2. Comma Operator (,)
Definition: The comma operator evaluates multiple expressions from left to right and returns the value of the last expression.

Example:
int m = 5;
int n = (m+1, m-2, m+5);  // result = m+5 = 10

Important:
int a, b, c;
Here comma is only a separator, not the operator.

3. Address-of Operator (&)
Definition: Returns the memory address of a variable.

Example:
int x = 10;
cout << &x;
Note:Also used in reference declaration:
int &ref = x;


4. Dot Operator (.)
Definition: Used to access members of a structure or class object.

Example:
struct A {
    int x;
};

A obj;
obj.x = 10;


5. Arrow Operator ->
Definition:Used to access members of a structure/class using a pointer.

Example:
A obj;
A* ptr = &obj;

ptr->x = 10;
Equivalent:
(*ptr).x


6. Casting Operators
Definition:Used to convert one data type into another.


***************************************************HIERARCHY OF OPERATORS****************************************************************************

1. ()   []   ->   .          (Postfix)

2. ++   --   !   ~   &   *   sizeof   (Unary)

3. *   /   %                (Multiplicative)

4. +   -                    (Additive)

5. <<   >>                  (Shift)

6. <   >   <=   >=          (Relational)

7. ==   !=                  (Equality)

8. &   ^   |                (Bitwise)

9. &&   ||                  (Logical)

10. =   +=   -=             (Assignment)

11. ,                       (Comma - lowest)


*/