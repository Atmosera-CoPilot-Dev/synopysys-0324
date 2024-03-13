#include <iostream>
#include "helpers.hpp"

int main() {
    // Valid phone numbers
    std::string phoneNumber1 = "+1-123-456789";
    std::string phoneNumber2 = "+91-987-654321";
    std::string phoneNumber3 = "+123-456-7890";

    // Invalid phone numbers
    std::string phoneNumber4 = "+1-123-4567890"; // Too many digits in last group
    std::string phoneNumber5 = "+1-123-45678";   // Too few digits in last group
    std::string phoneNumber6 = "+1-123456789";   // Missing hyphen between groups
    std::string phoneNumber7 = "123-456-7890";   // Missing plus sign

    // Test valid phone numbers
    if (validatePhoneNumber(phoneNumber1)) {
        std::cout << phoneNumber1 << " is a valid phone number." << std::endl;
    } else {
        std::cout << phoneNumber1 << " is an invalid phone number." << std::endl;
    }

    if (validatePhoneNumber(phoneNumber2)) {
        std::cout << phoneNumber2 << " is a valid phone number." << std::endl;
    } else {
        std::cout << phoneNumber2 << " is an invalid phone number." << std::endl;
    }

    if (validatePhoneNumber(phoneNumber3)) {
        std::cout << phoneNumber3 << " is a valid phone number." << std::endl;
    } else {
        std::cout << phoneNumber3 << " is an invalid phone number." << std::endl;
    }

    // Test invalid phone numbers
    if (validatePhoneNumber(phoneNumber4)) {
        std::cout << phoneNumber4 << " is a valid phone number." << std::endl;
    } else {
        std::cout << phoneNumber4 << " is an invalid phone number." << std::endl;
    }

    if (validatePhoneNumber(phoneNumber5)) {
        std::cout << phoneNumber5 << " is a valid phone number." << std::endl;
    } else {
        std::cout << phoneNumber5 << " is an invalid phone number." << std::endl;
    }

    if (validatePhoneNumber(phoneNumber6)) {
        std::cout << phoneNumber6 << " is a valid phone number." << std::endl;
    } else {
        std::cout << phoneNumber6 << " is an invalid phone number." << std::endl;
    }

    if (validatePhoneNumber(phoneNumber7)) {
        std::cout << phoneNumber7 << " is a valid phone number." << std::endl;
    } else {
        std::cout << phoneNumber7 << " is an invalid phone number." << std::endl;
    }

    return 0;
}