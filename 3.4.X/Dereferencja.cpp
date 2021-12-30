#include <iostream>
#include <string>

void print(std::string* p)
{

	std::cout << p << " = " << *p << "\n";	//wypisanie zmiennej "name"
	
}

int main()
{
	std::string text = "Hello world!";
	std::string* p = &text;

	print(p);

	return 0;
}
