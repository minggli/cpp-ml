 # include <iostream>

 int factorial(int n)
 {
   if (n > 1) {
     return n * factorial(n - 1);
   } else {
     return 1;
   }
 }

void wrapper(int (*func)(int))
{
  std::cout << "Hello! This application calculates factorial." << std::endl;
  std::cout << "Enter a number: ";
  int x;
  std::cin >> x;
  std::cout << "factorial of " << x << " is " << func(x) << std::endl;
}
int main()
{
  wrapper(factorial);
  return 0;
}
