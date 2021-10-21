#include <iostream>
#include <string>

auto main(int argc, char*argv[]) -> int
{
  //if (argc == 0) return 1;  
  int x = 1;
  while (x <= argc) //(int x = 1; x <= argc; x++)
  { 
    auto var1 = std::string{argv[1]};
    auto var2 = std::string{argv[2]};
    if (var1 == "-n") 
    {
      std::cout << argv[x+1] << " ";
    }
    else if (var1 == "-l") std::cout << argv[x+1] << "\n";
    else if (var1 == "-r") 
    {
      for (int x=(argc-1); x>=2; x--) std::cout << argv[x] << " ";
      return 0;
    }
    else std::cout << argv[x] << " ";
    x++;
  };
  std::cout << "test";
  return 0;
}
