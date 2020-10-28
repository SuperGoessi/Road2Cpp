#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <memory>

using std::string;
using std::vector;

using namespace std;

//double power(double a, int b){
//    double result {1.0};
//    if(b >= 0) {
//        for(int i {}; i < b; ++i){
//            result *= a;
//        }
//    }
//    else {
//        for(int i {}; i < -b; ++i) {
//            result /= a;
//        }
//    }
//    return result;
//}

//double change_it(double it);

//double change_it(double* pointer_it);

//double average(double array [], size_t count);

//double yield(double arrays [][4], size_t count);

//void find_word(vector<string>& words, string& str, const string& seperators);
//void list_word(const vector<string>& words);

//std::shared_ptr<vector<string>> find_word(string& str, const string& seperators);
//void list_word(const std::shared_ptr<vector<string>> pWord);

//void show_error(const string& messsage = "There is an error.");

//void show_data(const int data[], size_t count=1, const string& title="Data Values", size_t width=10, size_t perLine = 5);
//void show_data(const double data[], size_t count=1, const string& title = "Data values", size_t width = 10, size_t perLine = 5);
//const double* smallest(const double data [], size_t count);
//const double* largest(const double data [], size_t count);
//double* shift_range(double data [], size_t count, double min_num);
//double* scale_range(double data [], size_t count, double max_num);
//double* normalize_data(double data [], size_t count);

//void nextInteger();

long next_Fibonacci();

int main()
{
//    double a {};
//    int b {};
//    std::cout << "Please enter the a and b: ";
//    std::cin >> a >> b;
//    std::cout << power(a, b) << std::endl;

//    double it {18.0};
//    std::cout << "The changed number is " << change_it(&it) << ", the number is " << it << std::endl;
//    double aArray [] {1.0, 2.0, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 4.4};
//    std::cout << "The average of the array is " << average(aArray, sizeof(aArray)/sizeof(double)) << std::endl;

//    double arrays [][4] {{1.1, 2.2, 3.3, 4.4},{2.1, 2.3, 2.4, 2.9},{3.2, 3.4, 3.7, 3.9},{100.9, 99.9, 12.1, 19.2},{0.0, 1.2, 34.5, 23.9},{108.0, 102.3, 104.3, 102.1}};
//    std::cout << "The average of the array is " << yield(arrays, sizeof(arrays)/sizeof(arrays[0]));
//    string text;
//    std::cout << "Please enter text and end it with a *: ";
//    std::getline(std::cin, text, '*');
//    std::cout << text << std::endl;
//
//    string seperators {" ,;:.\"!?'\n"};

//    find_word(words, text, seperators);
//    list_word(words);

//    list_word(find_word(text, seperators));

//    show_error();

//    int samples[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//
//    int dataItem{-99};
//    show_data(&dataItem);
//
//    dataItem = 13;
//    show_data(&dataItem, 1, "Unlucky for some!");
//
//    show_data(samples, sizeof(samples)/sizeof(samples[0]));
//    show_data(samples, sizeof(samples)/sizeof(samples[0]), "Samples");
//    show_data(samples, sizeof(samples)/sizeof(samples[0]), "Samples", 6);
//    show_data(samples, sizeof(samples)/sizeof(samples[0]), "Samples", 8, 4);
//    double samples[] {
//        11.0, 23.0, 13.0, 4.0,
//        57.0, 36.0, 317.0, 88.0,
//        9.0, 100.0, 121.0, 12.0
//    };
//    const size_t count {sizeof(samples)/sizeof(samples[0])};
//    show_data(samples, count, "Original Values");
//    normalize_data(samples, count);
//    show_data(samples, count, "Normalized Values", 12);
//    nextInteger();
//    nextInteger();
//    nextInteger();

    std::cout << "How many numbers do you want?" << std::endl;
    int count {};
    std::cin >> count;
    for(size_t i{}; i < count; ++i){
        std::cout << next_Fibonacci() << " ";
        if((i+1)%5 == 0)
            std::cout << std::endl;
    }



    return 0;
}

long next_Fibonacci(){
    static long last {};
    static long last_but_one {1};

    long next {last+last_but_one};
    last_but_one = last;
    last = next;
    return next;

}

//void nextInteger(){
//    static int count {};
//    std::cout << ++count << std::endl;
//}

//void show_data(const double data[], size_t count, const std::string& title, size_t width, size_t perLine) {
//    std::cout << title << std::endl;
//    for(size_t i {}; i < count; ++i){
//        std::cout << std::setw(width) << data[i];
//        if((i+1)% perLine == 0){
//            std::cout << std::endl;
//        }
//    }
//    std::cout << std::endl;
//}
//
//const double* smallest(const double data [], size_t count){
//    size_t initial {};
//    for(size_t i {}; i < count; ++i){
//        if(data[initial] > data[i]){
//            initial = i;
//        }
//    }
//    return& data[initial];
//}
//
//const double* largest(const double data [], size_t count) {
//    size_t initial {};
//    for(size_t i {}; i < count; ++i){
//        if(data[initial] < data[i]){
//            initial = i;
//        }
//    }
//    return& data[initial];
//}
//
//double* shift_range(double data [], size_t count, double min_num){
//    for(size_t i {}; i < count; ++i){
//        data[i] -= min_num;
//    }
//    return data;
//}
//
//double* scale_range(double data [], size_t count, double divisor) {
//    if(divisor == 0){
//        return data;
//    }
//    for(size_t i {}; i < count; ++i){
//        data[i] /= divisor;
//    }
//    return data;
//}
//
//double* normalize_data(double data [], size_t count) {
//    return scale_range(shift_range(data, count, *smallest(data, count)), count, *largest(data, count));
//}
//void show_error(const string& message){
//    std::cout << message << std::endl;
//}

//std::shared_ptr<vector<string>> find_word(string& str, const string& seperators){
//    auto pWord = std::make_shared<vector<string>>();
//    size_t s = str.find_first_not_of(seperators);
//    size_t e {};
//
//    while(s != string::npos) {
//        e = str.find_first_of(seperators, s+1);
//        if(e == string::npos){
//            e = str.length();
//        }
//        pWord->push_back(str.substr(s, e-s));
//        s = str.find_first_not_of(seperators, e+1);
//    }
//    return pWord;
//}
//
//void list_word(const std::shared_ptr<vector<string>> pWord){
//    int count {};
//    for(auto& w: *pWord){
//        std::cout << w << " ";
//        ++count;
//        if(count%5 == 0){
//            std::cout << std::endl;
//        }
//    }
//}

//void find_word(vector<string>& words, string& str, const string& seperators){
//    size_t s = str.find_first_not_of(seperators);
//    size_t e {};
//
//    while(s != string::npos){
//        e = str.find_first_of(seperators, s+1);
//        if(e==string::npos){
//            e=str.length();
//        }
//        words.push_back(str.substr(s,e-s));
//        //std::cout << str.substr(s, e-s);
//        s = str.find_first_not_of(seperators, e+1);
//    }
//}
//
//void list_word(const vector<string>& words){
//    int count {};
//    for(auto& w: words){
//        std::cout << w << " ";
//        ++count;
//        if(count%5 == 0)
//            std::cout << std::endl;
//    }
//}
//double yield(double arrays [][4], size_t counta) {
//    double total {};
//    int countb {};
//    for(size_t i {}; i < counta; ++i){
//        for(size_t j {}; j < 4; ++j) {
//            total += arrays[i][j];
//            ++countb;
//        }
//    }
//    return total/countb;
//}

//double average(double array [], size_t count){
//    double total {};
//    for(size_t i {}; i < count; ++i){
//        total += array[i];
//    }
//    return total/count;
//}

//double change_it (double* it) {
//    *it += 10;
//    return *it;
//}
