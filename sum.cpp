#include <iostream>
#include <sstream>
using namespace std;

int
main()
{
  int sum = 0;
  string line;

  while (getline(cin, line)) {
    istringstream isstr(line);
    int n = 0;
    
    while (isstr >> n) {
      sum += n;
    }
  }
  
  cout << sum << endl;
}
