#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void AddOne(int* j)
{
    // Dereference the pointer and increment the int being pointed to.
    (*j)++;
}

int* AddOne_Return(int& j)
{
    // Increment the referenced int and return the
    // address of j.
    j++;
    return &j;
}

int main()
{
    int i = 1;

    // Declare a reference to i.
    int& j = i;
    cout << "The value of j is: " << j << "\n";

    // Change the value of i.
    i = 5;
    cout << "The value of i is changed to: " << i << "\n";
    cout << "The value of j is now: " << j << "\n";

    // Change the value of the reference.
    // Since reference is just another name for the variable,
    // th
    j = 7;
    cout << "The value of j is now: " << j << "\n";
    cout << "The value of i is changed to: " << i << "\n";

    /*Each variable in a program stores its contents in the computer's memory, and each chunk of the memory has an address number.
    For a given variable, the memory address can be accessed using an ampersand in front of the variable.
    To see an example of this, execute the following code which displays the hexadecimal memory addresses of the variables a and b:*/

    int a = 5;
    int b = 6;

    // Print the memory addresses of i and j
    cout << "The address of i is: " << &a << "\n";
    cout << "The address of j is: " << &b << "\n";

    // At this point, you might be wondering why the same symbol& can be used to both access memory addressesand, as you've seen before, pass references into a function. This is a great thing to wonder about. The overloading of the ampersand symbol & and the * symbol probably contribute to much of the confusion around pointers.

    // The symbols & and*have a different meaning, depending on which side of an equation they appear.

    // This is extremely important to remember.For the& symbol, if it appears on the left side of an equation(e.g.when declaring a variable), it means that the variable is declared as a reference.If the& appears on the right side of an equation, or before a previously defined variable, it is used to return a memory address, as in the example above.

    // Once a memory address is accessed, you can store it using a pointer. A pointer can be declared by using the * operator in the declaration. See the following code for an example:

    int c = 5;
    // A pointer pointer_to_i is declared and initialized to the address of i.
    int* pointer_to_c = &c;

    // Print the memory addresses of c and pointer_to_c
    cout << "The address of c is:          " << &c << "\n";
    cout << "The variable pointer_to_c is: " << pointer_to_c << "\n";

    /*Once you have a pointer, you may want to retrieve the object it is pointing to.In this case, the* symbol can be used again.This time, however, it will appear on the right hand side of an equation or in front of an already - defined variable, so the meaning is different.In this case, it is called the "dereferencing operator", and it returns the object being pointed to.You can see how this works with the code below :*/
    int d = 5;
    // A pointer pointer_to_i is declared and initialized to the address of i.
    int* pointer_to_d = &d;

    // Print the memory addresses of i and pointer_to_d
    cout << "The address of d is:          " << &d << "\n";
    cout << "The variable pointer_to_d is: " << pointer_to_d << "\n";
    cout << "The value of the variable pointed to by pointer_to_d is: " << *pointer_to_d << "\n";

    // Vector v is declared and initialized to {1, 2, 3}
    vector<int> v{ 1, 2, 3 };

    // Declare and initialize a pointer to the address of v here:
    vector<int>* pointer_to_v = &v;

    // The following loops over each int a in the vector v and prints.
    // Note that this uses a "range-based" for loop: https://www.geeksforgeeks.org/range-based-loop-c/
    for (int a : v) {
        cout << a << "\n";
    }

    // Dereference your pointer to v and print the int at index 0 here (note: you should print 1):
    cout << "The first element of v is: " << (*pointer_to_v)[0] << "\n";

    // Pointers can be used in another form of pass-by-reference when working with functions. When used in this context, they work much like the references that you used for pass-by reference previously. If the pointer is pointing to a large object, it can be much more efficient to pass the pointer to a function than to pass a copy of the object as with pass-by-value.

    // In the following code, a pointer to an int is created, and that pointer is passed to a function.The object pointed to is then modified in the function.

    cout << "The value of i is: " << i << "\n";

    // Declare a pointer to i:
    int* pi = &i;
    AddOne(pi);
    cout << "The value of i is now: " << i << "\n";

    int k = 1;
    cout << "The value of k is: " << k << "\n";

    // Declare a pointer and initialize to the value
    // returned by AddOne:
    int* my_pointer = AddOne_Return(k);
    cout << "The value of k is now: " << k << "\n";
    cout << "The value of the int pointed to by my_pointer is: " << *my_pointer << "\n";
}