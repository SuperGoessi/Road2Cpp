#include <iostream>

using namespace std;

int main()
{
    int num {};
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << ":";
    cin >> num;

    if (num >= 10) {
        std::cout << "The number is larger or equal than 10." << std::endl;
    }

    if (num <= 100) {
        std:;cout << "The number is less than or equal than 100." << std::endl;
    }

    if (num >= 10 && num <= 100) {
        std::cout << "All statements are right." << std::endl;
    }


    return 0;
}
