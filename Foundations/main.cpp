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
#include <fstream>
#include <numeric>
#include <string>
#include <sstream>
#include <vector>


// Namespaces are a way in C++ to group identifiers (names) together. They provide context for identifiers to avoid naming collisions. The std namespace is the namespace used for the standard library.
// The using command adds std::cout to the global scope of the program. This way you can use cout in your code instead of having to write std::cout.
// cout is an output stream you will use to send output to the notebook or to a terminal, if you are using one.
// Note that the second two lines in the example end with a semicolon ;. Coding statements end with a semicolon in C++. The #include statement is a preprocessor command, so it doesn't need one.
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;
using std::accumulate;

// Functions delcared and defined here.
int AdditionFunction(int e, int f)
{
	return e + f;
}

// Vector Sum Function
// We may also want to use "const" in front of the vector<int> and element to tell the complier that we will not be changing anything and the the vector will remain CONSTant
int VectorSum(const vector<int> vector /*&vector << this is better practice as it a reference that passes the vector through the function vs making a copy*/)
{
	// Set a base variable
	int sum = 0;

	// We could also reference the elements of a vector here too "&element"
	for (const int element : vector)
	{
		// Add each vector element to the sum variable
		sum += element;
	}
	// Return the sum variable
	return sum;

	// Basic Interation
	/*int sum = 0;
	for (int i = 0; i < v.size(); ++i)
		sum += v[i];
	return sum;*/

	// Inerator
	/*int sum = 0;
	for (auto i = v.begin(); i != v.end(); ++i)
		sum += *i;   The *i dereferences
	return sum;*/

	// Accumulate Function
	/*You will need to add #include<numeric>   Optional: using std::accumulate
		if you added the using statement then you just need to write accumulate instead of std::accumulate everytime
		return std::accumulate(v.begin(), v.end(), 0);*/
}

// Print Strings Function
void PrintStrings(string a, string b)
{
	cout << a << " " << b << "\n\n";
	// Good practice to add return; even if the return value is void although not needed
	return;
}

// Print Board Function - My Solution
void VectorBoard(const vector<vector<int>> vBoard)
{
	// I will be referencing VectorSum and the 2D Vector FOR loop

	for (const auto vector : vBoard)
	{
		for (const int element : vector)
		{
			cout << element << " ";
		}
		cout << "\n";
	}
	return;
}

// Another solution for printing out the vector board
//void PrintBoard(const vector<vector<int>> board) {
//	for (int i = 0; i < board.size(); i++) {
//		for (int j = 0; j < board[i].size(); j++) {
//			cout << board[i][j];
//		}
//		cout << "\n";
//	}
//}

void ReadBoardFile(string path)
{
	ifstream vector_board(path);
	if (vector_board)
	{
		cout << "The file stream has been created!" << "\n";
		string line;
		while (getline(vector_board, line))
		{
			cout << line << "\n";
		}
	}
}

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

	cout << "Print out the vector \"board\"\n";
	VectorBoard(board);
	cout << "\n\n";

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
		for (int v_2DVector : i_2DVector)
		{
			cout << v_2DVector << " ";
		}
		cout << "\n";
	}

	// FUNCTIONS
	// When a function is declared and defined in a single C++ file, the basic syntax is as follows: "return_type FunctionName(parameter_list) { Body of function here. }"
	// The function is also declared and defined outside of the main(). See beginning of file.

	auto g = 3;
	auto h = 7;
	cout << "\nAddition function works!\n";
	cout << AdditionFunction(g, h) << "\n\n";

	vector<int> v4{ 1, 2, 3 };
	cout << "Vector sum function works!\n";
	cout << VectorSum(v4) << "\n\n";
	// Accumulate: you can completely delete the function we added outside of main() and do it in one line
	// The first few methods we used are ways to create your own library. C++ comes with the standard (std) library where people have already created similiar functions. I encourage you to go check out the details of those files.
	// cout << std::accumulate(v.begin(), v.end(), 0) << "\n";

	// Return Void Type
	string s1 = "C++ is";
	string s2 = "super awesome.";

	PrintStrings(s1, s2);

	// WHILE loop with an integrated IF statement to print out even numbers
	auto j = 0;
	while (j <= 10)
	{
		if (j % 2 == 0)
		{
			cout << j << "\n";
			j++;
		}
		j++;
	}
	cout << "\n";

	// File Input Streams
	// In C++, you can use the std::ifstream object to handle input file streams.To do this, you will need to include the header file that provides the file streaming classes : <fstream>.
	// Once the <fstream> header is included, a new input stream object can be declared and initialized using a file path path:
	//	std::ifstream my_file;
	//	my_file.open(path);
	// Alternatively, the declarationand initialization can be done in a single line as follows :
	// 	std::ifstream my_file(path);
	// C++ ifstream objects can also be used as a boolean to check if the stream has been created successfully. If the stream were to initialize successfully, then the ifstream object would evaluate to true. If there were to be an error opening the file or some other error creating the stream, then the ifstream object would evaluate to false.
	// If the input file stream object has been successfully created, the lines of the input stream can be read using the getline method. In the cell below, a while loop has been added to the previous example to get each line from the stream and print it to the console.

	const string path = "D:/Udacity/Foundations/Foundations/vector_board";
	ReadBoardFile(path);
	cout << "\n";

	// PROCESSING STRINGS - Only have one of the following methods uncommented at a time
	// Now that the board is being read into your program line by line, you will want to process each line and store the data, rather than just streaming it to cout. There are many ways to do this in C++, but we will focus on istringstream from the <sstream> header file.

	string k("1 2 3");
	istringstream my_stream(k);
	int l;

	// Extraction Operator >> will read until whitespace is reached or until the stream fails
	// Method 1
	// my_stream >> l;
	// cout << l << "\n\n";

	// The istringstream object can also be used as a boolean to determine if the last extraction operation failed - this happens if there wasn't any more of the string to stream, for example. If the stream still has more characters, you are able to stream again. See the following code for an example of using the istringstream this way:
	// 
	// Testing to see if the stream was successful and printing results.
	// Method 2
	/*while (my_stream)
	{
		my_stream >> l;
		if (my_stream)
		{
			cout << "That stream was successful: " << l << "\n";
		}
		else {
			cout << "That stream was NOT successful!" << "\n";
		}
	}
	cout << "\n";*/

	// The extraction operator >> writes the stream to the variable on the right of the operator and returns the istringstream object, so the entire expression my_stream >> n is an istringstream object and can be used as a boolean! Because of this, a common way to use istringstream is to use the entire extraction expression in a while loop as follows:
	// Method 3
	while (my_stream >> l) {
		cout << "That stream was successful: " << l << "\n";
	}
	cout << "The stream has failed." << "\n\n";

	// Strings with Mixed Types
	// In the stream example above, the string contained only whitespaces and characters which could be converted to ints. If the string has mixed types, more care is needed to process the string. In the following example, the type char is used, which is a type that can hold only a single ASCII character.
	string k2("1,2,3");
	istringstream my_stream2(k2);
	char m;
	int n;

	while (my_stream2 >> n >> m) {
		cout << "That stream was successful: " << n << " " << m << "\n";
	}
	cout << "The stream has failed." << "\n\n";
	// In that example, notice that the 3 was not printed! The expression:
	// 	my_stream >> n >> c
	// tried to stream an int followed by a char.Since there was no char after the 3, the stream failedand the while loop exited.
}
