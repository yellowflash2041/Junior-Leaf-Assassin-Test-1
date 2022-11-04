// Do NOT edit nor remove any existing code when testing or submitting
#include <iostream>
#include <string>

std::string main_function(std::string input) {
  // Place your code here
  int len = input.length();
  for (int i = 0; i < len; i++) {
    if (input[i] >= 'a' && input[i] <= 'z') {
      input[i] = toupper(input[i]);
    }
    else if (input[i] >= 'A' && input[i] <= 'Z') {
      input[i] = tolower(input[i]);
    }
  }
  return input;
}
    
