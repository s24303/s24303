#include <iostream>
#include <string>
#include <random>

int main(int argc, char*argv[]){
  
  std::random_device rd;
  std::uniform_int_distribution <int> number (1, 100);
  
  int const num = number(rd);
  int guess;
  
  while (num != guess)
  {
  std::cout << "guess: ";
  std::getline (std::cin, guess);
  if (guess > num)
     {
       std::cout << "number too big!";
     }
  if else (guess < num)
     {
       std::cout << "number too small"; 
     } 
  }
  std::cout << "just right!";
  return 0;
}

