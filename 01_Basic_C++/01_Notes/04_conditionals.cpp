/*  📌 Conditionals in C++

Conditionals are used to control the flow of execution based on conditions (true/false).

1. if Statement
Definition: Executes a block of code only if condition is true

Syntax:
if (condition) {
    // code
}
Example:
int x = 10;
if (x > 5) {
    cout << "x is greater than 5";
}


2. if-else Statement
Definition: Executes one block if condition is true, otherwise another block

Syntax:
if (condition) {
    // true block
} else {
    // false block
}
Example:
int x = 3;
if (x > 5) {
    cout << "Greater";
} else {
    cout << "Smaller";
}


3. if-else if-else Ladder
Definition:Used when multiple conditions are checked sequentially

Syntax:
if (condition1) {
    // code
} else if (condition2) {
    // code
} else {
    // default
}
Example:
int marks = 85;
if (marks >= 90) {
    cout << "A";
} else if (marks >= 75) {
    cout << "B";
} else if (marks >= 50) {
    cout << "C";
} else {
    cout << "Fail";
}


4. Nested if
Definition: An if inside another if

Example:
int x = 10;
if (x > 5) {
    if (x < 20) {
        cout << "Between 5 and 20";
    }
}


5. switch Statement
Definition: Used to select one block from multiple options based on value

Syntax:
switch (variable) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
Example:
int day = 2;
switch(day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    default:
        cout << "Invalid";
}

*/