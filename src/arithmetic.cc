/*
* simple toy programme performing basic arithmetic operations.
*/

#include <iostream>
#include <list>
#include <algorithm>

float getNumber()
{
  std::cout << "Please enter a numeric value: " << std::endl;
  float val;
  std::cin >> val;
  return val;
}

bool in_sequence(int val, std::list<int> array)
{
  return std::find(array.begin(), array.end(), val) != array.end();
}

int getOperation()
{
  int op;
  bool is_valid = false;
  int valid_ops[4] = {1, 2, 3, 4};
  std::list <int> valid_list \
    (valid_ops, valid_ops + sizeof(valid_ops) / sizeof(int));

  while (!is_valid) {
    std::cout << \
      "Please enter which operator you want (1 = +, 2 = -, 3 = *, 4 = /): " \
      << std::endl;
    std::cin >> op;
    is_valid = in_sequence(op, valid_list);
  }
  return op;
}

float calculate(int x, int op, int y)
{
  if (op == 1) {
    return x + y;
  } else if (op == 2) {
    return x - y;
  } else if (op == 3) {
    return x * y;
  } else {
    return x / y;
  }
}

int main()
{
  std::cout << \
    "Hello! This application performs arithmetic operations." \
    << std::endl;
  float a = getNumber();
  int op = getOperation();
  float b = getNumber();
  float rv = calculate(a, op, b);
  std::cout << "The result is: " << rv << std::endl;
  return 0;
}
