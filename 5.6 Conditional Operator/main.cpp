#include <iostream>

int main(){
	// ?: operator take the following form
	// condition ? expression1 : expression2;

	/*
	Consider this if-else statment
	if (x>y)
		greater = x;
	else
		greater = y;

	this can be rewritten as
	greater = ((x > y) ? x : y);
	*/

	constexpr bool inBigClassroom{ false };
	constexpr int classSize{ inBigClassroom ? 30 : 20 };
	std::cout << "The class size is: " << classSize << '\n';

	return 0;
}