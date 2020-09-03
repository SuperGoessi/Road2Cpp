#include <iostream>
#include <iomanip>
#include <locale>
#include <array>
#include <vector>

using std::cout;
using std::endl;
using std::setw;
using std::vector;

int main()
{
//    double temperatures[366];
//    temperatures[3] = 99.0;
//    unsigned int height0[6];
//    unsigned int height1[6] {26, 37, 47, 55, 62, 75};
//    unsigned int height2[6] {26, 37, 47};
//    unsigned int height3[6] {};
//    unsigned int sum {};
//    sum = height1[0] + height1[1] + height1[2];

//    double rainfall[12] {1.1, 2.8, 3.4, 3.7, 2.1, 2.3, 1.8, 0.0, 0.3, 0.9, 0.7, 0.5};
//    double temp[12] {};
//    for (size_t i {}; i<12; ++i) {
//        temp[i] = rainfall[i];
//    }

//    const size_t size {6};
//    unsigned int height[size] {26, 37, 47, 55, 62, 75};
//    unsigned int total {};
//
//    for (size_t i {}; i < size; ++i) {
//        total += height[i];
//    }
//
//    int average {total/size};
//    std::cout << "The average height is " << average << std::endl;
//
//    unsigned int count {};
//    for (size_t i {}; i < size ; ++i) {
//        if(height[i] < average) ++count;
//    }
//    std::cout << count <<" people are below average height." << std::endl;

//    int values[] {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
//    std::cout << "There are " << sizeof (values)/sizeof(values[0]) << " elements in the array." << std::endl;
//
//    int sum{};
//    for (size_t i {}; i < sizeof(values)/sizeof(values[0]); ++i) {
//        sum += values[i];
//    }
//    std::cout << "The sum of the array elements is " << sum << std::endl;

//    const double pi {3.14159265};
//    const size_t perline {3};
//    size_t linecount {};
////
//    for (double radius {0.2}; radius <= 3.0; radius += 0.2) {
//        std::cout << std::fixed << std::setprecision(2) << " radius =" << std::setw(5) << radius << "area =" << std::setw(6) << pi*radius*radius;
//
//        if (perline == ++linecount) {
//            std::cout << std::endl;
//            linecount = 0;
//        }
//    }
//    std::cout << std::endl;

//    for (double radius {0.2}; radius <= 3.0; radius += .2) {
//        std::cout << std::fixed << std::setprecision(2) << " radius ="
//                  << std::setw(5)
//                  << radius << " area =" << std::setw(6) << pi * radius * radius
//                  << " delts to 3 = " << std::scientific
//                  << ((radius + 0.2) - 3.0) << std::endl;
//    }



//    unsigned int limit {};
//    std::cout << "This program calculated n! and the sum of the integers" << " up to n for values 1 to limit.\n";
//    std::cout << "What upper limit for n would you like? ";
//    std::cin >> limit;
//
//    std::cout << std::setw(8) << "integer" << std::setw(8) << " sum" << std::setw(20) << " factorial" << std::endl;
//
//    for (unsigned long long n {1ULL}, sum {}, factorial {1ULL}; n <= limit ; ++n) {
//        sum += n;
//        factorial *= n;
//        std::cout << std::setw(8) << n << std::setw(8) << sum << std::setw(20) << factorial << std::endl;
//    }

//    int values [] {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
//    int total {};
//    for (int x : values) {
//        total += x;
//    }
//    std::cout << total << std::endl;

//    unsigned int limit {};
//    std::cout << "This program calculates n! and the sum of the integers"
//              << " up to n for values 1 to limit.\n";
//    std::cout << "What upper limit for n would you like? ";
//    std::cin >> limit;
//
//    std::cout << std::setw(8) << "integer" << std::setw(8) << " sum" << std::setw(20) << " factorial" << std::endl;
//    unsigned int n {};
//    unsigned int sum {};
//    unsigned long long factorial {1ULL};
//    while (++n <= limit) {
//        sum += n;
//        factorial *= n;
//        std::cout << std::setw(8) << n << std::setw(8) << sum
//                  << std::setw(20) << factorial << std::endl;
//    }

//    size_t count {};
//    std::cout << "How many heights will you enter? ";
//    std::cin >> count;
//    unsigned int height [count];
//    size_t entered {};
//    unsigned int h;
//    while (entered < count) {
//        std::cout << "Enter a height: ";
//        std::cin >> h;
//
//        if(h > 0) {
//            height[entered] = h;
//            ++entered;
//        }
//        else {
//            std::cout << "A height must be positive - try again.\n";
//        }
//    }
//
//    unsigned int total {};
//    for (size_t i {}; i < count ; ++i) {
//        total += height[i];
//    }
//    std::cout << "The average height is " << total/count << std::endl;

//    char reply {};
//    int count {};
//    double temperature {};
//    double average {};
//    do {
//        std::cout << "Enter a temperature reading: ";
//        std::cin >> temperature;
//
//        average += temperature;
//        ++count;
//
//        std::cout << "Do you want to enter another? (y/n): ";
//        std::cin >> reply;
//    } while(tolower(reply) == 'y');
//    std::cout << "The average temperature is " << average/count << std::endl;

//    size_t table {};
//    const size_t table_min {2};
//    const size_t table_max {12};
//    char reply {};
//
//    do {
//        std::cout << "What size table would you like ("
//                  << table_min << " to " << table_max << ")? ";
//        std::cin >> table;
//        std::cout << std::endl;
//
//        if (table < table_min || table > table_max) {
//            std::cout << "Invalid table size entered. Program terminated."
//                      << std::endl;
//            return 1;
//        }
//
//        std::cout << std::setw(6) << " |";
//        for (size_t i {1}; i <= table; ++i) {
//            std::cout << " " << std::setw(3) << i << " |";
//        }
//        std::cout << std::endl;
//
//        for (size_t i {}; i <= table; ++i) {
//            std::cout << "------";
//        }
//        std::cout << std::endl;
//
//        for (size_t i {1}; i <= table; ++i) {
//            std::cout << " " << std::setw(3) << i << " |";
//
//            for (size_t j {1}; j <= table; ++j) {
//                std::cout << " " << std::setw(3) << i*j << " |";
//            }
//            std::cout << std::endl;
//        }
//        std::cout << "\nDo you want another table (y or n)? ";
//        std::cin >> reply;
//    } while (tolower(reply) == 'y');

//    const int maxlength {100};
//    char text[maxlength] {};
//
//    std::cout << "Enter a line of text: " << std::endl;
//
//    std::cin.getline(text, maxlength);
//    std::cout << "You entered:\n" << text << std::endl;
//    size_t vowels {};
//    size_t consonants {};
//
//    for(int i {}; text[i] != '\0'; i++) {
//        if(isalpha(text[i])) {
//            switch(tolower(text[i])) {
//            case 'a' : case 'e': case 'i': case 'o': case 'u':
//                vowels++;
//                break;
//            default:
//                consonants++;
//            }
//        }
//    }
//
//    std::cout << "Your input contained " << vowels << " vowels and " << consonants << " consonants." << std::endl;

//    double carrots[3][4]
//    {
//        {2.5, 3.2, 3.7, 4.1},
//        {4.1, 3.9, 1.6, 3.5},
//        {2.8, 2.3, 0.9, 1.1}
//    }

//    const size_t max_str {80};
//    char stars[][max_str] {
//        "Fatty Arbuckle", "Clara Bow", "Lassie", "Slim Pickens", "Boris Karloff", "Mae West", "Oliver Hardy", "Greta Garbo"
//    };
//    size_t choice {};
//
//    std::cout << "Pick a lucky star! Enter a number between 1 and " << sizeof(stars)/sizeof(stars[0]) << ": ";
//    std::cin >> choice;
//
//    if(choice >= 1 && choice <= sizeof(stars)/sizeof(stars[0])) {
//        std::cout << "Your lucky star is " << stars[choice - 1] << std::endl;
//    }
//    else {
//        std::cout << "Sorry, you haven't got a lucky star." << std::endl;
//    }

//    std::array<double, 100> values0;
//    for (auto v:values0){
//        std::cout << v;
//    }
//    std::cout << std::endl;
//
//    std::array<double, 100>values1 {0.5, 1.0, 1.5, 2.0};
//    for (auto v:values1){
//        std::cout << v;
//    }
//    std::cout << std::endl;
//
//    std::array<double, 100> values2;
//    values2.fill(3.1415926);
//    for (auto v:values2){
//        std::cout << v;
//    }
//    std::cout << std::endl;

//    std::array<double, 4> these {1.0, 2.0, 3.0, 4.0};
//    std::array<double, 4> those {1.0, 2.0, 3.0, 4.0};
//    std::array<double, 4> them {1.0, 3.0, 3.0, 2.0};
//
//    if (these == those) std::cout << "these and those are equal." << std::endl;
//    if (those != them) std::cout <<"those and them are not equal" << std::endl;
//    if (those < them) std::cout << "those are less than them." << std::endl;
//    if (them > those) std::cout << "them are greater than those." << std::endl;

//    const unsigned int min_wt {100U};
//    const unsigned int max_wt {250U};
//    const unsigned int wt_step {10U};
//    const size_t wt_count {1 + (max_wt - min_wt) / wt_step};
//    const unsigned int min_ht {48U};
//    const unsigned int max_ht {84U};
//    const unsigned int ht_step {2U};
//    const size_t ht_count { 1 + (max_ht - min_ht) / ht_step};
//
//    const double lbs_per_kg {2.2};
//    const double ins_per_m {39.37};
//    std::array<unsigned int, wt_count> weight_lbs {};
//    std::array<unsigned int, ht_count> height_ins {};
//
//    for (size_t i{}, w{min_wt}; i < wt_count; w += wt_step, ++i) {
//        weight_lbs[i] = w;
//    }
//
//    size_t i {};
//    for (unsigned int h {min_ht}; h <= max_ht; h += ht_step) {
//        height_ins.at(i++) = h;
//    }
//
//    cout << setw(7) << " |";
//    for (auto w: weight_lbs) {
//        cout << setw(5) << w << " |";
//    }
//    cout << endl;
//
//    for (size_t i{1}; i < wt_count; ++i) {
//        cout << "------------------";
//    }
//    cout << endl;
//
//    double bmi {};
//    unsigned int feet {};
//    unsigned int inches {};
//    const unsigned int inches_per_foot {12U};
//    for (auto h:height_ins) {
//        feet = h / inches_per_foot;
//        inches = h % inches_per_foot;
//        cout << setw(2) << feet << "'" << setw(2) << inches << "\"" << "|";
//        cout << std::fixed << std::setprecision(1);
//        for (auto w: weight_lbs) {
//            bmi = h / ins_per_m;
//            bmi = (w / lbs_per_kg) / (bmi*bmi);
//            cout << setw(2) << " " << bmi << " |";
//        }
//        cout << endl;
//    }
//
//    for (size_t i {1}; i < wt_count; ++i) {
//        cout << "----------------";
//    }
//    cout << "\nBMI from 18.5 to 24.9 is normal" << endl;

    vector<double> x;
    double temp {};

    while (true) {
        std::cout << "Enter a non-zero value, or 0 to end: ";
        std::cin >> temp;
        if (!temp) {
            break;
        }
        x.push_back(temp);
    }

    std::cout << "Starting sort." << std::endl;
    bool swapped {false};
    while (true) {
        for (vector<double>::size_type i {}; i < x.size() - 1; ++i) {
            if (x.at(i) > x.at(i + 1)) {
                temp = x.at(i);
                x.at(i) = x.at(i + 1);
                x.at(i + 1) = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
        swapped = false;
    }

    std::cout << "your data in asending sequence:\n" << std::fixed << std::setprecision(1);
    const size_t perline {10};
    size_t n {};
    for (vector<double>::size_type i {}; i < x.size(); ++i) {
        std::cout << std::setw(8) << x[i];
        if (++n == perline) {
            std::cout << std::endl;
            n = 0;
        }
    }
    std::cout << std::endl;

    return 0;
}
