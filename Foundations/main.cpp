// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// The #include is a preprocessor command which is executed before the code is compiled. It searches for the iostream header file and pastes its contents into the program. iostream contains the declarations for the input/output stream objects.
#include <iostream>
#include <string>
#include <vector>


// Namespaces are a way in C++ to group identifiers (names) together. They provide context for identifiers to avoid naming collisions. The std namespace is the namespace used for the standard library.
// The using command adds std::cout to the global scope of the program. This way you can use cout in your code instead of having to write std::cout.
// cout is an output stream you will use to send output to the notebook or to a terminal, if you are using one.
// Note that the second two lines in the example end with a semicolon ;. Coding statements end with a semicolon in C++. The #include statement is a preprocessor command, so it doesn't need one.
using std::cout;
using std::string;
using std::vector;

int main()
{
	// In this line, the code is using cout to send output to the notebook. The `<<` operator is the stream insertion operator, and it writes what's on the right side of the operator to the left side. So in this case, `"Message here"` is written to the output stream `cout`.
	cout << "Hello World! \n";
	cout << "You can print messages using \"cout\"\n";

	// Declaring and initializing an int variable.
	int a = 9;

	// Declaring a string variable without initializing right away.
	string b;

	// Initializing the string b.
	b = "Here is a string being initialized";

	cout << "\nDeclaring and initializing an int variable.\n";
	cout << a << "\n";

	cout << "\nWe have declared a string variable\n";
	cout << b << "\n";

	// 1D Vectors: used for storing data
	// C++ also has several container types that can be used for storing data. We will start with vectors, as these will be used throughout this lesson, but we will also introduce other container types as needed.
	// Vectors are a sequence of elements of a single type, and have useful methods for getting the size, testing if the vector is empty, and adding elements to the vector.

	// Three ways of declaring and initializing vectors.
	vector<int> v_1{ 0, 1, 2 };
	vector<int> v_2{ 3, 4, 5 };
	vector<int> v_3;
	v_3 = { 6 };
	cout << "\nEverything worked with declaring and initializing 1D vectors!\n";

	// 2D Vectors: used for storing data
	// Unfortunately, there isn't a built-in way to print vectors in C++ using cout. You will learn how to access vector elements and you will write your own function to print vectors later. For now, you can see how vectors are created and stored. Below, you can see how to nest vectors to create 2D containers.

	// Creating a 2D Vector
	vector<vector<int>> v{ {1, 2}, {3, 4} };
	cout << "\nGreat! A 2D vector has been created.\n";

	// Auto: In your previous code, the type for each variable was explicitly declared. In general, this is not necessary, and the compiler can determine the type based on the value being assigned. To have the type automatically determined, use the auto keyword.
	auto i = 5;
	auto v_6 = { 1, 2, 3 };
	cout << "\nVariables declared and initialized without explicitly states type!\n";

	// A* Search
	// In order to write the A* search algorithm, you will need a grid or "board" to search through. We'll be working with this board throughout the remaining exercises, and we'll start by storing a hard-coded board in the main function. In later exercises, you will write code to read the board from a file.
	vector<vector<int>> board{
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 1, 0} };

	// 1D Vector Access
	cout << "\nPrinting out an element from the 1D vector \"v_1\"\n";
	cout << v_1[0] << "\n";

	// 1D Vector Length
	cout << "\nPrinting out the length from the 1D vector \"v_1\"\n";
	cout << v_1.size() << "\n";

	// 2D Vector Access
	cout << "\nPrinting out an element from the 2D vector \"board\"\n";
	cout << board[1][1] << "\n";

	// 2D Vector Length
	cout << "\nPrinting out the length of a vector from the 2D vector \"board\"\n";
	cout << board[3].size() << "\n";

	// FOR Loop
	cout << "\nPrinting out a FOR loop using the integer \"a\".\n";
	for (int i = 0; i <= a; i++)
	{
		cout << i << "\n";
	}

}
