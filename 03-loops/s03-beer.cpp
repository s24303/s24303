
#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int 
{  
  int number;  // = std::stoi(argv[1]);
  int beer;
  if (argc == 0) return 1;
  // if (argc != 0) beer = number;
  if (argv[1] == NULL)
  {  
    number = 99;
  }
  else 
  {
    number = std::stoi(argv[1]);
  }
  beer = number;
  for (; beer > 0; beer --) 
  {
    std::cout << beer << " bottles of beer on the wall, " << beer  << " bottles of beer." << "\n" << "Take one down, pass it around, ";
  }; 
  std::cout << "No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, "<< number <<" of beer on the wall..." << "\n";
  return 0;
}

