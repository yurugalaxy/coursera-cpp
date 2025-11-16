#include <iostream>

int main() {
  std::cout << "Welcome to the Program.\n";

  int userOption{};

  while (true) {
    std::cout << "1: Print Help\n";
    std::cout << "2: Print Exchange Stats\n";
    std::cout << "3: Place an Ask\n";
    std::cout << "4: Place a Bid\n";
    std::cout << "5: Print Wallet\n";
    std::cout << "6: Continue\n";
    std::cout << "Type in 1-6\n";
    std::cin >> userOption;

    std::cout << userOption << '\n';
    switch (userOption) {
    case 1:
      std::cout << "Help - choose options from the menu\n";
      std::cout << "and follow the on-screen instructions.\n";
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    default:
      std::cout << "That's not an option, pick from 1-6.\n";
      break;
    }
  }
  return 0;
}
