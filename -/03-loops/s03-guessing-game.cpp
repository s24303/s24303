#include <iostream>
#include <string>
#include <random>

int main(){
  
  std::random_device rd;
  std::uniform_int_distribution <int> number (1, 100);

  
  int const num = number(rd);
  int guess;
  
  do
  {
    std::cout << "guess: ";
    std::cin >> guess;
   
    if (guess > num)
       {
         std::cout << "number too big! \n";
       }
    else if (guess < num)
       {
         std::cout << "number too small \n";       
       }
    else std::cout << "just right! \n";
  }
  while (guess != num);
  return 0;
}

