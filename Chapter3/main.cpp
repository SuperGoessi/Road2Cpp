#include <iostream>
#include <iomanip>
using std::setw;
using namespace std;

long count1 {999L};
double count2 {3.14};
int count3;

int main()
{
//    unsigned short number {16387U};
//    unsigned short result {number << 2};
//
//    std::cout << (number << 2);

//    unsigned int red {0XFF0000U};
//    unsigned int white {0XFFFFFFU};
//
//    std::cout << std::hex << std::setfill('0');
//    std::cout << "Try out bitwise AND and OR operators:";
//    std::cout << "\nInitial value red = " << setw(8) << red;
//    std::cout << "\nComplement ~red = " << setw(8) << ~red;
//
//    std::cout << "\nInitial value white = " << setw(8) << white;
//    std::cout << "\nComplement ~white = " << setw(8) << ~white;
//
//    std::cout << "\nBitwise AND red & white = " << setw(8) << (red & white);
//    std::cout << "\nBitwise OR red | white = " << setw(8) << (red | white);
//
//    std::cout << "\n\nNow try successive exclusive OR operations:";
//    unsigned int mask {red ^ white};
//    std::cout << "\nmask = red ^ white = " << setw(8) << mask;
//    std::cout << "\n mask ^ red = " << setw(8) << (mask ^ red);
//    std::cout << "\n mask ^ white = " << setw(8) << (mask ^ white);
//
//    unsigned int flags {0xFF};
//    unsigned int bit1mask {0x1};
//    unsigned int bit6mask {0x20};
//    unsigned int bit20mask {0x80000};
//
//    std::cout << "\n\nUse masks to select or set a particular flag bit:";
//    std::cout << "\nSelect bit 1 from flags : " << setw(8) << (flags & bit1mask);
//    std::cout << "\nSelect bit 6 from flags : " << setw(8) << (flags & bit6mask);
//    std::cout << "\nSwitch off bit 6 in flags : " << setw(8) << (flags &= ~bit6mask);
//    std::cout << "\nSwitch on bit 20 in flags : " << setw(8) << (flags |= bit20mask) << std::endl;

//    enum class Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
//    Day today {Day::Tuesday};
//    std::cout << "today is " << static_cast<int>(today) << std::endl;

    int count1 {10};
    int count3 {50};
    std::cout << "Value of outer count1 = " << count1 << std::endl;
    std::cout << "Value of global count1 = " << ::count1 << std::endl;
    std::cout << "Value of global count2 = " << count1 << std::endl;

    {
        int count1 {20};
        int count2 {30};
        std::cout << "\nValue of inner count1 = " << count1 << std::endl;
        std::cout << "Value of global count1 = " << ::count1 << std::endl;
        std::cout << "Value of inner count2 = " << count2 << std::endl;
        std::cout << "Value of global count2 = " << ::count2 << std::endl;

        count1 = ::count1 + 3;
        ++::count1;
        std::cout << "\nValue of inner count1 = " << count1 << std::endl;
        std::cout << "Value of global count1 = " << ::count1 << std::endl;
        count3 += count2;
    }

    std::cout << "\nValue of outer count1 = " << count1 << std::endl << "Value of outer count3 = " << count3 << std::endl;
    std::cout << "Value of global count3 = " << ::count3 << std::endl;
    std::cout << count2 << std::endl;

    return 0;
}
