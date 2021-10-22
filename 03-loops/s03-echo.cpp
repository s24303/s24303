
#include <iostream>
#include <string>


auto main(int argc, char*argv[]) -> int
{
  
  for (int i = 1; i < argc; i++)
  { 
    auto var1 = std::string{argv[1]};
    auto var2 = std::string{argv[2]};
    if (var1 == "-n") std::cout << argv[i+1] << " ";
    else if (var1 == "-l") std::cout << argv[i+1] << std::endl;
    else if (var1 == "-r" && var2 != "-l" && var2 !="-n") 
    {
      for (int i=(argc-1); i>=2; i--) std::cout << argv[i] << " ";
      std::cout << "\n";
      return 0;
    }
    else if (var1 == "-r" && var2 == "-l")
    {
      for (int i=(argc-1); i>=3; i--) std::cout << argv[i] << "\n";
      return 0;
    }
    else if (var1 == "-r" && var2 == "-n") 
    {
      for (int i=(argc-1); i>=3; i--) std::cout << argv[i] << " ";
      return 0;
    }
    else std::cout << argv[i] << " ";
  }
 // std::cout << "\n";
  return 0;
}
