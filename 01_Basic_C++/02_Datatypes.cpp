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
     */