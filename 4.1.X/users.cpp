#include <iostream>
#include <cstdlib>
#include <ctime>

enum PERMISSION
{
	NO_PERMS,
	PERM_READ,
	PERM_WRITE,
	PERM_READANDWRITE,
	PERM_EXECUTE,
	PERM_READANDEXECUTE,
	PERM_WRITEANDEXECUTE,
	ALL_PERMS
};

int main()
{
	srand(time(NULL));

	int users[10]; //tworzenie tablicy
	for (int i = 0; i < 10; i++)
	{
		users[i] = (std::rand() % 8); //wypełnienie tablicy losowymi liczbami

		int perm = users[i];
		std::cout << "user " << i + 1 << ": ";
		switch (perm)
		{
		case NO_PERMS:
		{
			std::cout << "have no permissions \n";
			break;
		}
		case PERM_READ:
		{
			std::cout << "can read \n";
			break;
		}
		case PERM_WRITE:
		{
			std::cout << "can write \n";
			break;
		}
		case PERM_READANDWRITE:
		{
			std::cout << "can read and write \n";
			break;
		}
		case PERM_EXECUTE:
		{
			std::cout << "can execute \n";
			break;
		}
		case PERM_READANDEXECUTE:
		{
			std::cout << "can read and execute \n";
			break;
		}
		case PERM_WRITEANDEXECUTE:
		{
			std::cout << "can write and execute \n";
			break;
		}
		case ALL_PERMS:
		{
			std::cout << "have all perms \n";
			break;
		}
		}
	}

	return 0;
}
