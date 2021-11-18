#include <iostream>

void function(int a, int b) 
{
	int wa = a * 2;
	int wb = b + 100;

	std::cout << "Podwojona wartość liczby " << a << " to: " << wa << "\n";
	std::cout << "Liczba " << b << " zwiększona o 100 wynosi: " << wb << "\n";
}

int main() 
{
	int a, b;

	std::cout << "Podaj liczbę A: ";
	std::cin >> a;

	std::cout << "Podaj liczbę B: ";
	std::cin >> b;

	function(a, b);

	return 0;
}
