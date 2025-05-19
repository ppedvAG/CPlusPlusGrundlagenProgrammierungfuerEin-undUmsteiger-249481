#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{

	char testString[7];
	testString[0] = 'a';
	testString[1] = 'a';
	testString[2] = 'a';
	testString[3] = 'a';
	testString[4] = 'a';
	testString[5] = 'a';
	testString[6] = '\0'; // Null-terminate the string
	std::cout << testString << std::endl;

	char testString2[] = "aaaaaa";

	std::cout << testString2 << std::endl;
	cout << strlen(testString2) << endl;
	cout << strlen(testString) << endl;

}