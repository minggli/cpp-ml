#include <iostream>

int readNumber()
{
  int n;
  std::cout << "Please enter a number: " << std::endl;
  std::cin >> n;
  return n;
}

void writeAnswer(int x)
{
  std::cout << "The answer is :" << x << std::endl;
}

int main() {
    std::cout << "Enter a number: "; // ask user for a number
    int x; // no need to initialize x since we're going to overwrite that value on the very next line
    std::cin >> x; // read number from console and store it in x
    std::cout << "You entered " << x << std::endl;
    return 0;
}
