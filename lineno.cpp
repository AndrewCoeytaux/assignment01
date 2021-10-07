#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int
main()
{
  int num = 1;
  string line;

  while (getline(cin, line)) {
    for(int i = 0; i < 3 - int(log10(num) + 1); i++) {
      cout << " ";
    }

    cout << num << ": " << line << endl;
    num++;
  }
}
