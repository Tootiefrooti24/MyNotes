/*************************************************************COMMENTS************************************************************************/

//This is single line comment
/*Hi,Beautiful people!!!!
Welcome to the tootiefrooti world.I wish you all to have
a happy day.See yaa!! cuties.........This is multi-line comment*/


/*************************************************************VARIABLES************************************************************************/

/*In programming, a single piece of data is called a value (sometimes called a data value). Common examples of values include:

-->Numbers (e.g. 5 or -6.7).
-->Characters, which are placed between single-quotes (e.g. 'H' or '$'). Only a single symbol may be used.
-->Text, which must be placed between double-quotes (e.g. "Hello" or "H"). Text can contain 0 or more characters.
-->Values placed in single-quotes are interpreted by the compiler as character values.
-->Values placed in double-quotes are interpreted by the compiler as text values.
-->Numeric values are not quoted.
-->Values that are placed directly into the source code are called literals.
-->In C++, variable is a name given to a memory location. It is the basic unit of storage in a program

~~~RULES FOR NAMING VARIABLES~~~
The names given to a variable are called identifiers. There are some rules for creating these identifiers (names):

>>A name can only contain letters (A-Z or a-z), digits (0-9), and underscores (_).
>>It should start with a letter or an underscore only.
>>It is case sensitive.
>>The name of the variable should not contain any whitespace and special characters (i.e. #, $, %, *, etc).
>>We cannot use C++ keyword (e.g. float, double, class) as a variable name.

eg 1.:-    #include <iostream>
        using namespace std;
        int main() {
            int num = 3;
            cout << num << endl;
            num1 = 7;
            cout << num1;
            return 0;
        }....#output-->3 and 7....here the output would be 3 and 7 in new lines


eg 2.:-    #include <iostream>
           using namespace std;
           int main() {
            int num = 3;
            num = 7;
            cout << num1;
            return 0;
        }...#output-->7.......here the output would be 7 cuz at first we assigned 3 to the num variable but after that we updated it and assigned 7 so the new value which is 7 would be printed in the output



eg 3.:- #include <iostream>
        using namespace std;
        int main() {
            int num1 = 10, num2;
            
            // Assigning num1's value to num2
            num2 = num1;
            cout << num1 << " " << num2;
            return 0;
        }.....#output-->10 10



eg 4.:-     #include <iostream>
            using namespace std;
            int main() {
            int num1 = 10, num2 = 20;
            cout << num1 + num2;
            return 0;
}.....output-->30
    
*/

