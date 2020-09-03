#include<iostream>
#include<locale>
using namespace std;

int main()
{
//    bool isValid {true};
//
//    char first {};
//    char second {};
//
//    std::cout << "Enter a character: ";
//    std::cin >> first;
//
//    std::cout << "Enter a second character: ";
//    std::cin >> second;
//
//
//    std::cout << std::boolalpha;
//    std::cout << "The value of the expression " << first << '<' << second << " is: " << (first < second) << std::endl;
//    std::cout << "The value of the expression " << first << "==" << second << " is: " << (first == second) << std::endl;

//    std::cout << "Enter an integer between 50 and 100: ";
//    int value {};
//    std::cin >> value;
//
//    if(value < 50)
//        std::cout << "The value is invalid - it is less than 50." << std::endl;
//
//    if(value > 100)
//        std::cout << "The value is invalid - it is greater than 100." << std::endl;
//
//    std::cout << "You entered " << value << std::endl;

//    char letter {};
//    std::cout << "Enter a letter: ";
//    std::cin >> letter;
//
//    if(letter >= 'A') {
//        std::cout << "You entered an uppercase letter." << std::endl;
//        return 0;
//    }
//
//    if(letter >= 'a') {
//        if(letter <= 'z') {
//            std::cout << "You entered a lowercase letter." << std::endl;
//            return 0;
//        }
//    }
//
//    std::cout << "You did not enter a letter." << std::endl;

//    if(isupper(letter)) {
//        std::cout << "You entered an uppercase letter." << std::endl;
//        return 0;
//    }
//
//    if(islower(letter)) {
//        std::cout << "You entered a lowercase letter." << std::endl;
//        return 0;
//    }

//    if(std::isalnum(letter)) {
//        std::cout << "It is a letter or s digit." << std::endl;
//    }
//    else {
//        std::cout << "It is neither a letter nor a digit." << std::endl;
//    }

//    long number {};
//    std::cout << "Enter an integer less than 2 billion: ";
//    std::cin >> number;
//
//    if(number % 2L) {
//        std::cout << "Your number is odd." << std::endl;
//    }
//    else {
//        std::cout << "\nYour number is even." << std::endl;
//    }

//    char coffee {};
//    char donut {};
//    std::cout << "Please enter indicator for coffee and donut: ";
//    std::cin >> coffee >> donut;
//
//    if(coffee == 'y') {
//        if(donut == 'y'){
//            std::cout << "We have coffee and donut." << std::endl;
//        }
//        else {
//            std::cout << "We have coffee, but not donut." << std::endl;
//        }
//    }

//    int age {};
//    int income {};
//    int balance {};
//
//    std::cout << "Please enter your age in years: ";
//    std::cin >> age;
//    std::cout << "Please enter your annual income in dollars: ";
//    std::cin >> income;
//    std::cout << "What is your current account balance in dollars: ";
//    std::cin >> balance;
//
//    if (age >= 21 && (income > 25000 || balance > 100000)) {
//        int loan {};
//        if (2*income < balance/2) {
//            loan = 2*income;
//        }
//        else {
//            loan = balance/2;
//        }
//        std::cout << "\nYou can borrow up to $" << loan << std::endl;
//    }
//    else {
//        std::cout << "\nUnfortunately, you don't qualify for a loan." << std::endl;
//    }

//    int mice {};
//    int brown {};
//    int white {};
//
//    std::cout << "How many brown mice do you have? ";
//    std::cin >> brown;
//    std::cout << "How many white mice do you have? ";
//    std::cin >> white;
//
//    mice = brown + white;
//
//    std::cout << "You have " << mice << (mice == 1? " mouse ":" mice ") << "in total." << std::endl;

//    int choice {};
//    std::cout << "Your electronic recipe book is at your service.\n"
//              << "You can choose from the following delicious dishes:\n"
//              << "1 Boiled eggs\n"
//              << "2 Fried eggs\n"
//              << "3 Scrambled eggs\n"
//              << "4 Coddled eggs\n\n"
//              << "Enter your selection number: ";
//    std::cin >> choice;
//
//    switch(choice)
//    {
//    case 1:
//        std::cout << "\nBoil some egg." << std::endl;
//        break;
//    case 2:
//        std::cout << "Fry some eggs." << std::endl;
//        break;
//    case 3:
//        std::cout << "Scramble some eggs." << std::endl;
//        break;
//    case 4:
//        std::cout << "Coddle some eggs." << std::endl;
//        break;
//    default:
//        std::cout << "You entered a wrong number - try raw eggs." << std::endl;
//    }

    char letter {};
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    if(isalpha(letter)) {
        switch(tolower(letter)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            std::cout << "You entered a vowel." << std::endl;
            break;
        default:
            std::cout << "You entered a consonant." << std::endl;
            break;
        }
    }
    else {
        std::cout << "You did not enter a letter." << std::endl;
    }

    return 0;
}
