/*
	Prints out fibonacci numbers starting at 0 and going up to n in a single method call.
*/

#include <iostream>

int recursiveFibonacci(const unsigned n)
{
	// Static variables maintain values from method call to method call.
	// The first time through, they are 0 and 1
	// The next call 1 and 1, then 1 and 2, etc etc...
	static int secondLast = 0;
	static int last = 1;

	int temp = secondLast;
	secondLast = last;
	last += temp;

	std::cout << secondLast << std::endl;

	if(n == 0 || n ==1 )
		return 1;
	else
		return n + recursiveFibonacci(n - 1);
}

int main(int argc, char *argv[])
{

	const unsigned fibResult = recursiveFibonacci(10);

	std::cout << "Result is: " << fibResult << std::endl;


	std::cin.get();



}