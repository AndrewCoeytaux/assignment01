#include <iostream>
#include <string>
using namespace std;

int
main()
{
  const string prompt_fizz = "Enter the fizz number:";
  const string prompt_buzz = "Enter the buzz number:";
  const string error_message = "Invalid input.";

  cout << prompt_fizz << endl;
  int F;
  cin >> F;
  if (F <= 0 || cin.fail()) {
    cout << error_message << endl;
    return EXIT_FAILURE;
  }

  cout << prompt_buzz << endl;
  int B;
  cin >> B;
  if (B <= 0 || cin.fail()) {
    cout << error_message << endl;
    return EXIT_FAILURE;
  }

  for (int i = 1; i <= 20; i++) {
    if (i % F == 0 && i % B == 0) {
      cout << "FizzBuzz" << endl;
    } else if (i % F == 0) {
      cout << "Fizz" << endl;
    } else if (i % B == 0) {
      cout << "Buzz" << endl;
    } else {
      cout << i << endl;
    }
  }
}