#include <iostream>
#include <string>


int main()
{
	std::string name = "Adrian Reszka";	//zainicjowanie zmiennej
	std::string* w = &name;	//wskaźnik na adres zmiennej w pamięci

	std::cout << "Wartość zmiennej 'name': " << *w << "\n";	//wypisanie zmiennej "name"
	std::cout << "Adres zmiennej 'name': " << w << "\n";	//wypisanie adresu zmiennej "name"
	std::cout << "Rozmiar zmiennej 'name': " << sizeof(*w) << "\n"; //wypisanie długości zmiennej "name"
	
	std::cout << "\n";

	std::cout << "Wartość wskaźnika: " << w << "\n";	//wypisanie wartości wskaźnika
	std::cout << "Adres wskaźnika: " << &w << "\n";	//wypisanie adresu wskaźnika
	std::cout << "Rozmiar wskaźnika: " << sizeof(w) << "\n";	//wypisanie długości wskaźnika

	return 0;
}
