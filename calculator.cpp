#include <sstream>
#include <iostream>
#include <string>
#include <cstring>
#include <list>
#include <iterator>
#include <iostream>
#include <sstream>
#include <limits>
#include <vector>
using namespace std;

int main() {
  while (true) {
    cout << "Welcome! to my calculator type in the operator to you are goint to calculate\ntype in +,-,*, or /. type exit to end the program\n";
    string calculation = "";
    cin >> calculation;
    if (calculation=="exit") {
      break;
    }
    int number1=0;
    int number2=0;
    int answer=0;
    while (true) {
        cout << "Please type your first number\n";
        if (cin >> number1) {
            break;
        } else {
            cout << "Enter a valid integer value!\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    while (true) {
        cout << "Please type your second number\n";
        if (cin >> number2) {
            break;
        } else {
            cout << "Enter a valid integer value!\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    if (calculation=="+") {
      answer= number1+number2;
      cout << "Your answer is " << answer << "\n\n";
    } else if (calculation=="-") {
      answer= number1-number2;
      cout << "Your answer is " << answer << "\n\n";
    } else if (calculation=="*") {
      answer= number1*number2;
      cout << "Your answer is " << answer << "\n\n";
    } else if (calculation=="/") {
      if (number2==0) {
        cout << "Cannot divide by zero\n\n";
      } else {
        answer= number1/number2;
        cout << "Your answer is " << answer << "\n\n";
        }
    } else {
      cout << "Error, invalid operator try again\n";
    }
  }
  return 0;
}
