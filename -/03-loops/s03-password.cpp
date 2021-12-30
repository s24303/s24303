#include <iostream>
#include <string>

auto main(int argc, char*argv[]) -> int 
{
  if (argc == 0){
	return 1;
  }
  auto const password = std::string{argv[1]};
  auto passwd = std::string{};

  do
  {
  std::cout << "password: ";
  std::getline (std::cin, passwd);
  }
  while (password != passwd);
  std::cout << "OK! \n";
  return 0;
}


