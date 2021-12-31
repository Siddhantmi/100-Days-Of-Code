###### 100-Days-Of-Code
This is repository contains all my coding progress within these hundred days.

### Day one [ 31 december 2021]

# Q1.A. Way Too Long Words[Self Solved]
time limit per test
1 second
memory limit per test
256 megabytes
input
standard input
output
standard output

Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.
Input

The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.
Output

Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.
Examples
Input
Copy

4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Output
Copy

word
l10n
i18n
p43s

# Q1.solution 
#include <bits/stdc++.h>
using namespace std;

 int main(){
    
     int t;
     cin>>t;
     
     while(t--){
    string A ;
    cin>>A;
     
     int Size = A.size();
     int SS= Size-2;
    
      if( Size > 10){
           cout<<A[0]<<SS<<A[A.size()-1]<<endl;
     }else{
        cout<<A<<endl;
     }
         
     }
 }

# Q2.A. Square String?[self solved]
time limit per test
1 second
memory limit per test
256 megabytes
input
standard input
output
standard output

A string is called square if it is some string written twice in a row. For example, the strings "aa", "abcabc", "abab" and "baabaa" are square. But the strings "aaa", "abaaab" and "abcdabc" are not square.

For a given string s

determine if it is square.
Input

The first line of input data contains an integer t
(1≤t≤100

) —the number of test cases.

This is followed by t
lines, each containing a description of one test case. The given strings consist only of lowercase Latin letters and have lengths between 1 and 100

inclusive.
Output

For each test case, output on a separate line:

    YES if the string in the corresponding test case is square,
    NO otherwise. 

You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive response).
Example
Input
Copy

10
a
aa
aaa
aaaa
abab
abcabc
abacaba
xxyy
xyyx
xyxy

Output
Copy

NO
YES
NO
YES
YES
YES
NO
NO
NO
YES

# Q2.Solution
#include <bits/stdc++.h>
using namespace std;

 int main(){
    
     int t;
     cin>>t;
     
     while(t--){
    string A ;
    cin>>A;
     
     int Size = A.size();
     int SS= Size-2;
    
      if( Size > 10){
           cout<<A[0]<<SS<<A[A.size()-1]<<endl;
     }else{
        cout<<A<<endl;
     }
         
     }
 }

# Q3.B. Squares and Cubes[Not self-solved]
time limit per test
1 second
memory limit per test
256 megabytes
input
standard input
output
standard output

Polycarp likes squares and cubes of positive integers. Here is the beginning of the sequence of numbers he likes: 1
, 4, 8, 9

, ....

For a given number n
, count the number of integers from 1 to n that Polycarp likes. In other words, find the number of such x that x

is a square of a positive integer number or a cube of a positive integer number (or both a square and a cube simultaneously).
Input

The first line contains an integer t
(1≤t≤20

) — the number of test cases.

Then t
lines contain the test cases, one per line. Each of the lines contains one integer n (1≤n≤109

).
Output

For each test case, print the answer you are looking for — the number of integers from 1
to n

that Polycarp likes.
Example
Input
Copy

6
10
1
25
1000000000
999999999
500000000

Output
Copy

4
1
6
32591
32590
23125

# Solution 3.
#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        int n;
        cin >> n;
        set<int> a;
        for (int i = 1; i * i <= n; i++)
            a.insert(i * i);
        for (int i = 1; i * i * i <= n; i++)
            a.insert(i * i * i);
        cout << a.size() << endl;
    }
}

----
## Learned some thing new ==> sets<int> a;

Syntax:set<datatype> setname;

set<int> val; // defining an empty set
set<int> val = {6, 10, 5, 1}; // defining a set with values

Note: set<datatype, greater<datatype>> setname; is used for storing values in a set in descending order.

Properties:

The set stores the elements in sorted order.
All the elements in a set have unique values.
The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
Sets follow the Binary search tree implementation.
The values in a set are unindexed.

 Note: To store the elements in an unsorted(random) order,  unordered_set() can be used.

Some Basic Functions Associated with Set: 

    begin() – Returns an iterator to the first element in the set.
    end() – Returns an iterator to the theoretical element that follows the last element in the set.
    size() – Returns the number of elements in the set.
    max_size() – Returns the maximum number of elements that the set can hold.
    empty() – Returns whether the set is empty.

    CPP

CPP

#include <iostream>

#include <iterator>

#include <set>

using namespace std;

int main()

{

    set<int, greater<int> > s1;

    s1.insert(40);

    s1.insert(30);

    s1.insert(60);

    s1.insert(20);

    s1.insert(50);

    s1.insert(50);

    s1.insert(10);

    set<int, greater<int> >::iterator itr;

    cout << "\nThe set s1 is : \n";

    for (itr = s1.begin(); itr != s1.end(); itr++) {

        cout << *itr << " ";

    }

    cout << endl;

    set<int> s2(s1.begin(), s1.end());

    cout << "\nThe set s2 after assign from s1 is : \n";

    for (itr = s2.begin(); itr != s2.end(); itr++) {

        cout << *itr << " ";

    }

    cout << endl;

    cout << "\ns2 after removal of elements less than 30 "

            ":\n";

    s2.erase(s2.begin(), s2.find(30));

    for (itr = s2.begin(); itr != s2.end(); itr++) {

        cout << *itr << " ";

    }

    int num;

    num = s2.erase(50);

    cout << "\ns2.erase(50) : ";

    cout << num << " removed\n";

    for (itr = s2.begin(); itr != s2.end(); itr++) {

        cout << *itr << " ";

    }

    cout << endl;

    cout << "s1.lower_bound(40) : \n"

         << *s1.lower_bound(40) << endl;

    cout << "s1.upper_bound(40) : \n"

         << *s1.upper_bound(40) << endl;

    cout << "s2.lower_bound(40) :\n"

         << *s2.lower_bound(40) << endl;

    cout << "s2.upper_bound(40) : \n"

         << *s2.upper_bound(40) << endl;

    return 0;

}

Output

The set s1 is : 
60 50 40 30 20 10 

The set s2 after assign from s1 is : 
10 20 30 40 50 60 

s2 after removal of elements less than 30 :
30 40 50 60 
s2.erase(50) : 1 removed
30 40 60 
s1.lower_bound(40) : 
40
s1.upper_bound(40) : 
30
s2.lower_bound(40) :
40
s2.upper_bound(40) : 
60

Methods of Set in C++ STL
Method	Description
begin()	Returns an iterator to the first element in the set.
end()	Returns an iterator to the theoretical element that follows the last element in the set.
rbegin()	Returns a reverse iterator pointing to the last element in the container.
rend()	Returns a reverse iterator pointing to the theoretical element right before the first element in the set container.
crbegin()	Returns a constant iterator pointing to the last element in the container.
crend()	Returns a constant iterator pointing to the position just before the first element in the container.
cbegin()	Returns a constant iterator pointing to the first element in the container.
cend()	Returns a constant iterator pointing to the position past the last element in the container.
size()	Returns the number of elements in the set.
max_size()	Returns the maximum number of elements that the set can hold.
empty()	Returns whether the set is empty.
insert(const g) 	Adds a new element ‘g’ to the set.
iterator insert (iterator position, const g)	Adds a new element ‘g’ at the position pointed by the iterator.
erase(iterator position) 	Removes the element at the position pointed by the iterator.
erase(const g)	Removes the value ‘g’ from the set.
clear() 	Removes all the elements from the set.
key_comp() / value_comp()	Returns the object that determines how the elements in the set are ordered (‘<‘ by default).
find(const g)	Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to end.
count(const g)	Returns 1 or 0 based on the element ‘g’ is present in the set or not.
lower_bound(const g)	Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the set.
upper_bound(const g)	Returns an iterator to the first element that will go after the element ‘g’ in the set.
equal_range()	The function returns an iterator of pairs. (key_comp). The pair refers to the range that includes all the elements in the container which have a key equivalent to k.
emplace()	This function is used to insert a new element into the set container, only if the element to be inserted is unique and does not already exist in the set.
emplace_hint()	Returns an iterator pointing to the position where the insertion is done. If the element passed in the parameter already exists, then it returns an iterator pointing to the position where the existing element is.
swap()	This function is used to exchange the contents of two sets but the sets must be of the same type, although sizes may differ.
operator=	The ‘=’ is an operator in C++ STL which copies (or moves) a set to another set and set::operator= is the corresponding operator function.
get_allocator()	Returns the copy of the allocator object associated with the set.

--------
