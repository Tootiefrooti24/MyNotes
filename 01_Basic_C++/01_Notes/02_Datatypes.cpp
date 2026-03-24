/*Types of Data Types in C++

C++ data types are broadly divided into 3 categories:

1. Fundamental (Primitive) Data Types
These are basic building blocks.
Definition: Predefined types provided by C++ to store simple values.

-->>Types:
>>int → stores integers
>>float → stores decimal (single precision)
>>double → stores decimal (higher precision)
>>char → stores a single character.The keyword used to define a character is char. Its typical size is 1 byte, and it stores characters enclosed in single quotes (' '). It can generally store upto 256 characters according to their ASCII codes.
>>bool → stores true/false
>>void → represents no value

Example:
int a = 10;
float b = 3.14;
char c = 'A';
bool flag = true;


2. Derived Data Types
These are built using fundamental types.
Definition:Types formed from basic data types using language constructs.

Types:
>>Arrays
>>Pointers
>>References
>>Functions

Example:
int arr[5];     // array
int *p = &arr[0]; // pointer



3. User-Defined Data Types
These are created by the programmer.
Definition:Custom data types defined using C++ constructs.

Types:
>>struct
>>class
>>union
>>enum
>>typedef / using

Example:
struct Student {
    int id;
    string name;
}; 


--> C++ me string use kar sakte hai hum and for that we need to write #include<string> in the header
eg: #include <iostream>
    #include <string>
    using namespace std;
    int main() {
        string name = "Shruti";
        cout << name;
    }


-->In C++,if we want to take input we use "cin" and for printing output we use "cout".
    eg: #include <iostream>
        using namespace std;
        int main() {
            int n;
            cin>>n;
            cout << n;
        }
    

-->Hum C language me format specifiers like %d, %c etc use karte the but in c++ it is not required cuz cout is sufficient 
eg: In C,
     printf("The area of circle is %f",area)
     
     In C++,
     cout << "Area of circle is " << area;
     
     
     
1. Basic Units 
1 byte = 8 bits
A bit = 0 or 1

2. How many values or numbers can n bits store?
 formula:Total values=2^n numbers

Example: 8 bits-->2^8 = 256 values

3. Signed vs Unsigned (critical distinction)
Unsigned (only positive + zero)

Range:0 to (2^n−1)


Signed (positive + negative)

Range:−2^(n−1) to (2^(n−1)−1)

👉 One bit is used for sign


-->Exact ranges 

>>char (1 byte = 8 bits)
Signed:−128 to 127
Unsigned:0 to 255


>>short (2 bytes = 2*8 = 16 bits--->2^16 numbers)
Range: −2^15 to (2^15−1)
→ -32,768 to 32,767


>>int (4 bytes = 32 bits-->2^32 numbers)
Range:−2^31 to (2^31−1)
→ approx -2,147,483,648 to 2,147,483,647


>>long long (8 bytes = 8*8 = 64 bits-->2^64 numbers)
Range:−2^63 to (2^63−1)
Roughly: -9 × 10¹⁸ to +9 × 10¹⁸


-->Keyword	Meaning
    short->smaller integer
    int->standard integer
    long->bigger (platform dependent)
    long long->guaranteed 64-bit

    Example:
    short a = 10;
    int b = 1000;
    long long c = 10000000000;
 
    
6. Important Reality (most people ignore this)
Sizes are:compiler + system dependent
But in practice (CP + most systems):
                                        int → 4 bytes
                                        long long → 8 bytes



-->In some Cases,Overflow occurs due to large numbers so it is advisable to use long or long long instead of int in CP to avoid overflowing error
*/
