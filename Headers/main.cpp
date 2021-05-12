// Header files, or .h files, allow related function, method, and class declarations to be collected in one place.
// The corresponding definitions can then be placed in .cpp files.
// The compiler considers a header declaration a "promise" that the definition will be found later in the code, so if the compiler reaches a function that hasn't been defined yet, it can continue on compiling until the definition is found. This allows functions to be defined (and declared) in arbitrary order.

// The contents of header_example.h are included in 
// the corresponding .cpp file using quotes:
// #include "header_example.h"
#include <iostream>
#include <vector>
#include "increment_and_sum.h"

using std::cout;
using std::vector;

// The order of the following functions will cause a compiling error because the OuterFunction is not aware of the InnerFunction. This is why we use header files (see above).
//void OuterFunction(int i)
//{
//    InnerFunction(i);
//}
//
//void InnerFunction(int i)
//{
//    cout << "The value of the integer is: " << i << "\n";
//}

int main()
{
    /*int a = 5;
    OuterFunction(a);*/

    vector<int> v{ 1, 2, 3, 4 };
    int total = IncrementAndComputeVectorSum(v);
    cout << "The total is: " << total << "\n";
}