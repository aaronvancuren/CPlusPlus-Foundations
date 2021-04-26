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
	cout << "You can print messages using \"cout\"\n\n";

	// Declaring and initializing an int variable.
	int a = 9;

	// Declaring a string variable without initializing right away.
	string b;

	// Initializing the string b.
	b = "Here is a string being initialized";

	cout << "Declaring and initializing an int variable.\n";
	cout << a << "\n\n";

	cout << "We have declared a string variable\n";
	cout << b << "\n\n";

	// 1D Vectors: used for storing data
	// C++ also has several container types that can be used for storing data. We will start with vectors, as these will be used throughout this lesson, but we will also introduce other container types as needed.
	// Vectors are a sequence of elements of a single type, and have useful methods for getting the size, testing if the vector is empty, and adding elements to the vector.

	// Three ways of declaring and initializing vectors.
	vector<int> v1{ 0, 1, 2 };
	vector<int> v2 = { 3, 4, 5 };
	vector<int> v3;
	v3 = { 6 };
	cout << "Everything worked with declaring and initializing 1D vectors!\n\n";

	// 2D Vectors: used for storing data
	// Unfortunately, there isn't a built-in way to print vectors in C++ using cout. You will learn how to access vector elements and you will write your own function to print vectors later. For now, you can see how vectors are created and stored. Below, you can see how to nest vectors to create 2D containers.

	// Creating a 2D Vector
	vector<vector<int>> v1_2D{ {1, 2}, {3, 4} };
	cout << "Great! A 2D vector has been created.\n\n";

	// Auto: In your previous code, the type for each variable was explicitly declared. In general, this is not necessary, and the compiler can determine the type based on the value being assigned. To have the type automatically determined, use the auto keyword.
	auto aA = 5;
	auto aV = { 1, 2, 3 };
	cout << "Variables declared and initialized without explicitly stating a type!\n\n";

	// A* Search
	// In order to write the A* search algorithm, you will need a grid or "board" to search through. We'll be working with this board throughout the remaining exercises, and we'll start by storing a hard-coded board in the main function. In later exercises, you will write code to read the board from a file.
	vector<vector<int>> board{
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 1, 0} };

	// 1D Vector Access
	cout << "Printing out an element from the 1D vector \"v_1\"\n";
	cout << v1[0] << "\n\n";

	// 1D Vector Length
	cout << "Printing out the length from the 1D vector \"v_1\"\n";
	cout << v1.size() << "\n\n";

	// 2D Vector Access
	cout << "Printing out an element from the 2D vector \"board\"\n";
	cout << board[1][1] << "\n\n";

	// 2D Vector Length
	cout << "Printing out the length of a vector from the 2D vector \"board\"\n";
	cout << board[3].size() << "\n\n";

	// FOR Loop
	// Using integer "a" that was initialized earlier in the file.
	cout << "Printing out a FOR loop using the integer \"a\".\n";
	for (int i_for = 0; i_for <= a; i_for++)
		// If you haven't seen the ++ operator before, this is the post-increment operator, and it is where the ++ in the name "C++" comes from. The operator increments the value of i.
		// There is also a pre-increment operator which is used before a variable, as well as preand post decrement operators: --.The difference between pre and post lies in what value is returned by the operator when it is used.
	{
		cout << i_for << "\n";
	}

	cout << "\n";

	// NEW SECTION
	auto c = 1;

	// Post-increment assigns c to d and then increments c.
	auto d = c++;

	cout << "Post-increment example:" << "\n";
	cout << "The value of d is: " << d << "\n";
	cout << "The value of c is: " << c << "\n";
	cout << "\n\n";

	// Reset c to 1.
	c = 1;

	// Pre-increment increments c, then assigns to d.
	d = ++c;

	cout << "Pre-increment example:" << "\n";
	cout << "The value of d is: " << d << "\n";
	cout << "The value of c is: " << c << "\n";
	cout << "\n\n";

	// Decrement c;
	c--;
	cout << "Decrement example:" << "\n";
	cout << "The value of c is: " << c << "\n\n";

	// FOR Loop with a Container
	/*C++ offers several ways to iterate over containers. One way is to use an index-based loop as above. Another way is using a "range-based loop", which you will see frequently in the rest of this course.*/
	cout << "Printing out the elements from the vector \"forLoop\"\n";
	vector<int> forLoop{ 1, 2, 3, 4, 5 };
	for (int i_vector : forLoop)
	{
		cout << i_vector << "\n";
	}

	// Challenge: Print out a double range-based FOR loop that prints all of the entries of the 2D vector
	cout << "Printing out the elements from the 2D vector \"challengeForLoop\"\n";
	vector<vector<int>> challengeForLoop{ {1, 2}, {4, 16}, {32, 64} };

	// My Attempt
	/*for (int i_2DVector : challengeForLoop[1])
	{
		cout << "Vector: " << i_2DVector << "\n";
		for (int ii_2DVector : challengeForLoop[i_2DVector])
		{
			cout << "Element: " << ii_2DVector << "\n";
		}
	}*/

	// Correct Answer
	// You can use auto or vectot<int>. Use auto if you are not sure what to use.
	// You can also purposely use the wrong one like "int" and read the error to see what you need to use. Try it.
	for (auto i_2DVector : challengeForLoop)
	{
		for (int ii_2DVector : i_2DVector)
		{
			cout << ii_2DVector << " ";
		}
		cout << "\n";
	}




}
