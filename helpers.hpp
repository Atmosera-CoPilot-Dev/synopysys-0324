/*
This file defines useful inline functions that are used in the program.
- Generating a random number in a given range
- Generating a random number in a given range with a given seed
- Validating a phone number using a regular expression
- Returning the current date as a string in the form MM/DD/YYYY
- Returning a random welcome message
*/

#pragma once

#include <ctime>
#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <cstdlib>

/*
Generates a random number in a given range
*/
inline int generateRandomNumber(int min, int max) {
  return rand() % (max - min + 1) + min;
}


/*
Generate a function that validates a phone number using a regular expression
*/
inline bool validatePhoneNumber(std::string phoneNumber) {
    std::regex pattern("\\+\\d{1,3}-\\d{1,}-\\d{1,}");
    return std::regex_match(phoneNumber, pattern);
}


// generate a test for the validatePhoneNumber function
inline void testValidatePhoneNumber() {
  std::vector<std::string> phoneNumbers = {
    "+1-123-456-7890",
    "+123-456-7890",    // missing the country code
    "+1-123-456-7890a", // extra character at the end
    "+1-123-456-7890 "  // extra space at the end
    };
    for (auto phoneNumber : phoneNumbers) {
        std::cout << "Phone number: " << phoneNumber << " is " << (validatePhoneNumber(phoneNumber) ? "valid" : "invalid") << std::endl;
        }
}

// Return a random welcome message
inline std::string getWelcomeMessage() {
  std::vector<std::string> messages = {
    "Welcome to our store!",
    "We are glad you are here!",
    "Thank you for shopping with us!"
  };
  return messages[generateRandomNumber(0, messages.size() - 1)];
}