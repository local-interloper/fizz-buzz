#include <iostream>
#include <string>

using namespace std;

int main() {

  for (int i = 1; i <= 100; i++) {
    string out = "";

    if (i % 3 == 0) {
      out += "Fizz";
    }
    if (i % 5 == 0) {
      out += "Buzz";
    }

    if (out == "") {
      cout << i << endl;
    } else {
      cout << out << endl;
    }
  }
  return 0;
}