#include <iostream>
#include <iomanip>
#include <cmath>
#include <memory>
#include <vector>
#include <locale>

using namespace std;
using std::vector;
using std::shared_ptr;

int main()
{
//    long* pnumber {nullptr};
//    long number {};

//    long number {12345L};
//    long* pnumber {&number};
//
//    std::cout << pnumber << std::endl;
//
//    long height {1454L};
//    pnumber = &height;
//    std::cout << pnumber << std::endl;

//    int unit_price {295};
//    int count {};
//    int discQ {25};
//    double discount {0.07};
//    int* pcount {&count};
//
//    std::cout << "Enter the number of items you want: ";
//    std::cin >> *pcount;
//    std::cout << "The unit price is " << std::fixed << std::setprecision(2) << "$" << unit_price/100.0 << std::endl;
//
//    int* punit_price{&unit_price};
//    int price{ *pcount * *punit_price };
//    int* pprice {&price};
//
//    double net_price{};
//    double* pnet_price {nullptr};
//    pnet_price = &net_price;
//    if (*pcount > discQ) {
//        std::cout << "You qualify for a discount of "
//                  << static_cast<int>(discount * 100.0) << " percent.\n";
//        *pnet_price = price * (1.0 - discount) / 100.0;
//    }
//    else {
//        net_price = *pprice / 100.0;
//    }
//    std::cout << "The net price for " << *pcount << "items is $" << net_price << std::endl;

//    const char* pproverb {"A miss is as good as a mile."};
//
//    const char* pstar1 {"Fatty Arbuckle"};
//    const char* pstar2 {"Clara Bow"};
//    const char* pstar3 {"Lassie"};
//    const char* pstar4 {"Slim Pickens"};
//    const char* pstar5 {"Boris Karloff"};
//    const char* pstar6 {"Mae West"};
//    const char* pstar7 {"Oliver Hardy"};
//    const char* pstar8 {"Greta Garbo"};
//    const char* pstr {"Your lucky star is "};
//
//    size_t choice {};
//
//    std::cout << "Pick a lucky star! Enter a number 1 and 8: ";
//    std::cin >> choice;
//
//    switch (choice)
//    {
//    case 1:
//        std::cout << pstr << pstar1 << std::endl;
//        break;
//    case 2:
//        std::cout << pstr << pstar2 << std::endl;
//        break;
//    case 3:
//        std::cout << pstr << pstar3 << std::endl;
//        break;
//    case 4:
//        std::cout << pstr << pstar4 << std::endl;
//        break;
//    case 5:
//        std::cout << pstr << pstar5 << std::endl;
//        break;
//    case 6:
//        std::cout << pstr << pstar6 << std::endl;
//        break;
//    case 7:
//        std::cout << pstr << pstar7 << std::endl;
//        break;
//    case 8:
//        std::cout << pstr << pstar8 << std::endl;
//        break;
//    default:
//        std::cout << "Sorry, you haven't got a lucky star." << std::endl;
//
//    }

//    const char* pstars[] {
//        "Fatty Arbuckle", "Clara Bow", "Lassie", "Slim Pickens", "Boris Karloff", "Mae West", "Oliver Hardy", "Greta Garbo"
//    };
//
//    size_t choice {};
//    std::cout << "Pick a lucky star! Enter a number between 1 and " << sizeof(pstars) / sizeof(pstars[0]) << ": ";
//    std::cin >> choice;
//
//    if (choice >= 1 && choice <= sizeof(pstars)/(sizeof pstars[0])) {
//        std::cout << "Your lucky star is " << pstars[choice - 1] << std::endl;
//    }
//    else {
//        std::cout << "Sorry, you haven't got a lucky star." << std::endl;
//    }

//    long numbers[] {10L, 20, 30, 40, 50, 60, 70, 80};
//    long *pnum1 {&numbers[6]};
//    long *pnum2 {&numbers[1]};
//
//    int difference {pnum1 - pnum2};
//
//    std::cout << difference << std::endl;

//    long data[5] {};
//    long sum {};
//    for(size_t i {}; i < sizeof(data)/sizeof(*data); ++i) {
//        *(data + i) = 2*(i+1);
//    }
//    for(size_t i {}; i < sizeof(data)/sizeof(*data); ++i) {
//        sum += *(data + i);
//    }
//    std::cout << sum << std::endl;

//    const size_t max {100};
//    long primes[max] {2L, 3L, 5L};
//    size_t count {3};
//    long trial {5};
//    bool isprime {true};
//
//    do {
//        trial += 2;
//        size_t i {};
//
//        do {
//            isprime = trial % *(primes + i) > 0;
//        } while (++i < count && isprime);
//
//        if (isprime) {
//            *(primes + count++) = trial;
//        }
//    } while (count < max);
//
//    std::cout << "The first " << max << " primes are: " << std::endl;
//    for (size_t i{}; i < max; ++i) {
//        std::cout << std::setw(7) << *(primes + i);
//        if ((i+ 1) % 10 == 0)
//            std::cout << std::endl;
//    }
//    std::cout << std::endl;

//    double* pvalue {};
//    pvalue = new double {3.14};
//    delete pvalue;
//    pvalue = nullptr;

//    size_t max {};
//    size_t count {3};
//    std::cout << "How many primes would you like? ";
//    std::cin >> max;
//    unsigned long long* primes {new unsigned long long[max]};
//
//    *primes = 2uLL;
//    *(primes + 1) = 3uLL;
//    *(primes + 2) = 5uLL;
//    unsigned long long trial {*(primes + 2)};
//    bool isprime {false};
//
//    unsigned long long limit {};
//    do {
//        trial += 2;
//        limit = static_cast<unsigned long long>(std::sqrt(trial));
//        size_t i {};
//        do {
//            isprime = trial % *(primes + i) > 0;
//        } while (primes[++i] <= limit && isprime);
//
//        if (isprime) {
//            *(primes + count++) = trial;
//        }
//    } while (count < max);
//
//    for (size_t i{}; i < max; ++i) {
//        std::cout << std::setw(10) << *(primes + i);
//        if ((i + 1) % 10 == 0) {
//            std::cout << std::endl;
//        }
//    }
//
//    std::cout << std::endl;
//    delete[] primes;
//    primes = nullptr;

//    std::unique_ptr<double> pdata {new double{999.0}};
//    *pdata = 8888.0;
//    std::cout << *pdata << std::endl;
//    std::cout << std::hex << std::showbase << pdata.get() << std::endl;

//    auto pdata = std::make_shared<double>(999.0);

//    std::unique_ptr<double> pdata {new double{999.0}};
//    *pdata = 8888.0;
//    std::cout << *pdata << std::endl;
//
//    const size_t n {100};
//    std::unique_ptr<double[]> pvalues {new double[n]};
//
//    for(size_t i {}; i < n; ++i) {
//        pvalues[i] = i + 1;
//    }
//
//    for (size_t i {}; i < n; ++i) {
//        std::cout << pvalues[i] << " ";
//        if (i % 10 == 0 && i != 0) {
//            std::cout << std::endl;
//        }
//    }
//    pvalues.reset();

//    std::shared_ptr<double> pdata1 {new double {999.0}};
//    std::shared_ptr<double> pdata2 {pdata1};

//    double t {};
//    //auto pDay = std::make_shared<vector<double>>();
//    shared_ptr<vector<double>> pDay {new vector<double>};
//    while (true)
//    {
//        std::cin>>t;
//        if (t==9999)
//        {
//            break;
//        }
//        (*pDay).push_back(t);
//    }
//
//    for (auto m:*pDay) {
//        std::cout << m << std::endl;
//    }

    vector<shared_ptr<vector<double>>> temperatures;
    char choice {};
    double temp {};

    // record temperatures for each day
    while(true)
    {
        shared_ptr<vector<double>> pday {new vector<double>};
        temperatures.push_back(pday);
        std::cout << "Please enter temperatures for one day, seperated by space, and enter 9999 to finish." << std::endl;

        while(true)
        {
            std::cin >> temp;
            if(temp == 9999)
            {
                break;
            }
            (*pday).push_back(temp);
        }

        std::cout << "Do you wanna enter one day more? Please enter y or n." << std::endl;
        std::cin >> choice;
        if(tolower(choice)=='n')
        {
            break;
        }

    }

//    for(auto d:temperatures)
//    {
//        for(auto t:*d)
//        {
//            std::cout << t << std::endl;
//        }
//    }

    // calculate average temperature for every day

    size_t day {1};

    for(auto d:temperatures)
    {
        std::cout << "The average temperature for Day " << day << " is: ";
        double total {};
        int count_day {};
        for(auto t:*d)
        {
            total += t;
            count_day++;
        }
        std::cout << (total/count_day) << std::endl;
        day++;
    }

    return 0;

}
