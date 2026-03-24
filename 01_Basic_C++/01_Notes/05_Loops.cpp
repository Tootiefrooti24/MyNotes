/*📌 Loops in C++

Loops are used to execute a block of code repeatedly until a condition is satisfied.

1. for Loop
Definition: Used when the number of iterations is known

Syntax:
for (initialization; condition; update) {
    // code
}

Example:
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
Output:
1 2 3 4 5



2. while Loop
Definition: Executes as long as the condition is true

Syntax:
while (condition) {
    // code
}

Example:
int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}



3. do-while Loop
Definition: Executes at least once, even if condition is false

Syntax:
do {
    // code
} while (condition);

Example:
int i = 1;
do {
    cout << i << " ";
    i++;
} while (i <= 5);
 

4. break Statement
Definition: Used to exit the loop immediately

Example:
for (int i = 1; i <= 10; i++) {
    if (i == 5)
        break;
    cout << i << " ";
}
Output:
1 2 3 4



5. continue Statement
Definition: Skips the current iteration and moves to next iteration

Example:
for (int i = 1; i <= 5; i++) {
    if (i == 3)
        continue;
    cout << i << " ";
}

Output:
1 2 4 5


6. Nested Loops
Definition: A loop inside another loop

Example:
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        cout << i << "," << j << endl;
    }
}
    
Output:
1,1
1,2
1,3
2,1
2,2
2,3
3,1
3,2
3,3

*/