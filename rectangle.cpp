#include <iostream>
#include <string>
using namespace std;

int
main()
{
  const string prompt_width = "Enter width:";
  const string prompt_height = "Enter height:";
  const string error_message = "Invalid input.";

  cout << prompt_width << endl;
  int W;
  cin >> W;
  if (W <= 0 || W >= 21 || cin.fail()) {
    cout << error_message << endl;
    return EXIT_FAILURE;
  }

  cout << prompt_height << endl;
  int H;
  cin >> H;
  if (H <= 0 || H >= 21 || cin.fail()) {
    cout << error_message << endl;
    return EXIT_FAILURE;
  }

  for (int h = 0; h < H; h++) {
    for (int w = 0; w < W; w++) {
      cout << "X";
    }
    cout << endl;
  }
}
