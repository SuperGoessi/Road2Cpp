#include <iostream>
#include <math.h>
#include <vector>
#include <memory>
using namespace std;

int main()
{
//    double data[50] {};
//    size_t n = sizeof(data)/sizeof(size_t);
//
//    for(size_t t {}; t < n; ++t) {
//        data[t] = t*2;
//        std::cout << *(data + t) << " ";
//        if ((t+1)%10==0) {
//            std::cout << std::endl;
//        }
//    }
//    std::cout <<std::endl;
//
//    for(size_t i {n}; i > 0; --i) {
//        std::cout << data[i-1] << " ";
//        if((i-1)%10 == 0)
//        {
//            std::cout<<std::endl;
//        }
//    }

//    std::cout << "Please enter the size of array: " << std::endl;
//    size_t n {};
//    std::cin >> n;
//    double data[n] {};
//    double total {};
//    double midnum {};
//
//    for (size_t i {}; i < n; ++i) {
//        midnum = 1/pow(i+1, 2);
//        *(data + i) = midnum;
//        total += midnum;
//    }
//
//    std::cout << total << std::endl;
//    std::cout << sqrt(total*6) << std::endl;
//    int* p1 {new int [6]};
//    int* p2 (new int [6]);
//    int* p3 (new int [6]);
//    int* arrayP [3] {p1,p2,p3};
//
//    for(size_t i {}; i < 6; ++i){
//        *(p1+i) = i+1;
//        *(p2+i) = *(p1+i)*(i+1);
//        *(p3+i) = *(p2+i)*(i+1);
//    }
//
//    for(size_t a {}; a < 6; ++a) {
//        std::cout << *(p1+a) << " ";
//    }
//    std::cout <<std::endl;
//
//    for(size_t a {}; a < 6; ++a) {
//        std::cout << *(p2+a) << " ";
//    }
//    std::cout <<std::endl;
//
//    for(size_t a {}; a < 6; ++a) {
//        std::cout << *(p3+a) << " ";
//    }
//    std::cout <<std::endl;

    vector<shared_ptr<vector<int>>> vclass;
    int num {};
    int age {};
    int choice {};

    while(true) {
        ++num;
        auto pclass = std::make_shared<vector<int>>();
        vclass.push_back(pclass);
        std::cout << "Please enter ages of class " << num << " ,and end with 0." << std::endl;
        while(true) {
            std::cin >> age;
            if(age==0) {break;}
            pclass->push_back(age);
        }
        std::cout << "Do you wanna add one class more? Enter 1 or 0: ";
        std::cin >> choice;
        if(choice == 0){break;}
    }
    int num_c {1};
    for(auto c: vclass) {
        int total {};
        int count {};
        for(auto s:*c) {
            total += s;
            ++count;
            if(count%5 == 0) {
                std::cout << std::endl;
            }
        }
        std::cout << total/count << " is class " << num_c << " average age." << std::endl;
        num_c++;
    }




    return 0;
}
