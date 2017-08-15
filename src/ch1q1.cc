/*
Write a single-file program (named main.cpp) that reads two separate integers
from the user, adds them together, and then outputs the answer.
*/
int readNumber();
void writeAnswer(int x);

int main()
{
  writeAnswer(readNumber() + readNumber());
  return 0;
}
