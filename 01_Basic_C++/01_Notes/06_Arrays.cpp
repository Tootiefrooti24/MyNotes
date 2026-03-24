/*
******************************************Arrays in C++***************************

🔹 Definition-->An array is a collection of elements of the same data type stored in contiguous memory locations. It has a fixed size.


🔹 Declaration and Initialization
int arr[5];              // declaration
int arr[5] = {1,2,3,4,5};  // initialization


🔹 Indexing
Arrays use 0-based indexing.
First element → arr[0]
Last element → arr[n-1]


🔹 Input and Output
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}



🔹 Important Points (Very Important)
-->Valid indices: 0 → n-1
-->Using i <= n leads to out-of-bounds error
-->Arrays have fixed size
-->Arrays do not have  built-in function like .size() or .length().So agar hume array ki size nikaalni hai then will we use the sizeof formula.Therefore it is advised to use vector cuz it has built in functions.
-->Inside functions, arrays behave like pointers


🔹 Size of Array
int size = sizeof(arr) / sizeof(arr[0]);
--> This formula works only where array is declared.If vector is declared then it is of no use.


🔹 Types of Arrays
1. One-Dimensional Array
int arr[5];
2. Two-Dimensional Array
int arr[3][4];


🔹 Traversal
Forward Traversal
for(int i = 0; i < n; i++){
    cout << arr[i];
}

Reverse Traversal
for(int i = n-1; i >= 0; i--){
    cout << arr[i];
}

🔹 Range-Based Loop (for-each)
for(int x : arr){
    cout << x;
}

👉 Limitation of for-each loop is:
-->Cannot modify original array
-->No index access means kisi particular index to access nahi kar paayenge kyuki for each loop har element pe traverse karta hai


🔹 Basic Operations on Arrays
            Traversal → Visit all elements → O(n)
            Search (Linear Search) → O(n)
            Insertion → Requires shifting → O(n)
            Deletion → Requires shifting → O(n)
            Update → O(1)

🔹 Example (Find Maximum Element)
int maxi = arr[0];

for(int i = 1; i < n; i++){
    if(arr[i] > maxi){
        maxi = arr[i];
    }
}



******************************************** Vectors in C++**************************************************

🔹 Definition--> A vector is a dynamic array provided by STL. It can grow or shrink in size.

🔹 Declaration:-
                    vector<int> v;
                    vector<int> v(n);
                    vector<int> v(n, 5);


🔹 Input and Output
for(int i = 0; i < n; i++){
    cin >> v[i];
}
for(int x : v){
    cout << x << " ";
}


🔹 Important Vector Functions

1. push_back()--> Adds element at the end.
eg:- v.push_back(10);

2. pop_back()--> Removes last element.
eg:- v.pop_back();

3. size()-->Returns number of elements.
eg:-v.size();

4. capacity()--> Returns total allocated memory.
eg:- v.capacity();

5. resize()--> Changes size of vector.
eg:- v.resize(5);

6. insert()-->Insert element at specific position.
eg:- v.insert(v.begin() + 1, 100);

7. erase()-->Removes element from position.
eg:- v.erase(v.begin() + 1);

8. clear()-->Removes all elements.
eg:- v.clear();

9. begin() and end()
v.begin();   // first element
v.end();     // one past last


10. front() and back()
v.front();
v.back();



🔹 Example (Vector Operations)
vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);

v.pop_back();          // [1,2]

v.insert(v.begin(), 10);  // [10,1,2]

v.erase(v.begin());       // [1,2]

cout << v.size();         // 2

v.clear();                // []

*/