#include <iostream>
#include <cmath>
#include <iomanip>
using std::cout;
using std::cin;
using std::sqrt;

int main()
{
//    cout << "Hello world!" << endl;
//
//    int apple_count {15};
//    int orange_count {5};
//    int total_fruit {apple_count + orange_count};
//
//    std::cout << "The value of apple_count is " << apple_count << std::endl;
//    std::cout << "The value of orange_count is " << orange_count << std::endl;
//    std::cout << "The value of total_fruit is " << total_fruit << std::endl;
//
//    signed char ch {20};
//    long temperature {-50L};
//    long width {500L};
//    long long height {250LL};
//    unsigned int toe_count {10U};
//    unsigned long angel_count {1000000UL};

//    unsigned int yards {}, feet {}, inches {};
//
//    std::cout << "Enter a distance as yards, feet, and inches to inches "
//              << "with the three values separated by spaces:"
//              << std::endl;
//    std::cin >> yards >> feet >> inches;
//
//    const unsigned int feet_per_yard {3U};
//    const unsigned int inches_per_foot {12U};
//    unsigned int total_inches {};
//    total_inches = inches + inches_per_foot * (yards*feet_per_yard + feet);
//    std::cout << "The distances corresponds to " << total_inches << " inches.\n";
//
//    std::cout << "Enter a distance in inches: ";
//    std::cin >> total_inches;
//    feet = total_inches/inches_per_foot;
//    inches = total_inches % inches_per_foot;
//    yards = feet/feet_per_yard;
//    feet = feet % feet_per_yard;
//    std::cout << "The distances corresponds to "
//              << yards << " yards "
//              << feet << " feet "
//              << inches << " inches." << std::endl;

//    int height {74};
//    std::cout << "The height variable occupies " << sizeof height << " bytes." << std::endl;
//    std::cout << "Type \"long long\" occupies " << sizeof (long long) << " bytes." << std::endl;
//    std::cout << "The expression height*height/2 occupies " << sizeof (height*height/2) << " bytes." << std::endl;

//    double a{1.5}, b{}, c{}, result{};
//    result = a / b;
//    std::cout << a << "/" << b << " = " << result << std::endl;
//    std::cout << result << " + " << a << " = " << result + a << std::endl;
//    result = b/c;
//    std::cout << b << "/" << c << " = " << result <<std::endl;

//    double angle {1.5};
//    double sine_value {std::sin(angle)};
//
//    float angle_deg {60.0f};
//    const float pi {3.14159f};
//    const float pi_degrees {180.0f};
//    float tangent {std::tan(pi * angle_deg/pi_degrees)};
//
//    double height {100.0};
//    double distance {50.0};
//    angle = std::atan2(height, distance);
//
//    double toe_to_tip {distance * std::cos(angle)};

    const double fish_factor {2.0/0.5};
    const double inches_per_foot {12.0};
    const double pi {3.14159265};

    double fish_count {};
    double fish_length {};

    cout << "Enter the number of fish you want to keep: ";
    cin >> fish_count;
    cout << "Enter the average fish length in inches: ";
    cin >> fish_length;
    fish_length /= inches_per_foot;

    double pond_area {fish_count * fish_length * fish_factor};

    double pond_diameter {2.0 * sqrt(pond_area/pi)};

    cout << "\nPond diameter required for " << fish_count << " fish is " << pond_diameter << " feet.\n";

    cout << "\nPond diameter required for " << fish_count << " fish is " << std::setprecision(2) << pond_diameter << " feet.\n";

    cout << "\nPond diameter required for " << fish_count << " fish is " << std::fixed << std::setprecision(2) << pond_diameter << " feet.\n";

    cout << "\nPond diameter required for " << fish_count << " fish is " << std::scientific << std::setprecision(2) << pond_diameter << " feet.\n";


    return 0;
}
