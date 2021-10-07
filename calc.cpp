#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int
main()
{
  const string prompt_function = "Enter a function name:";
  const string prompt_value = "Enter a value:";
  const string error_message = "Invalid input.";

  cout << prompt_function << endl;
  string W;
  cin >> W;
  if ((W != "sin" && W != "cos") || cin.fail()) {
    cout << error_message << endl;
    return EXIT_FAILURE;
  }

  cout << prompt_value << endl;
  double X;
  cin >> X;
  if (cin.fail()) {
    cout << error_message << endl;
    return EXIT_FAILURE;
  }

  if (W == "sin") {
    cout << setprecision(3) << sin(X) << endl;
  } else {
    cout << setprecision(3) << cos(X) << endl;
  }
}