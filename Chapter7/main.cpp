#include <iostream>
#include <string>
#include <locale>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
//    string empty;
//    std::cout << empty.length() << std::endl;
//    string part_literal {"Least said soonest mended.", 5};
//    std::cout << part_literal << std::endl;
//    string sleeping {1, 'z'};
//    std::cout << sleeping << std::endl;

//    string adjective {"hornswoggling"};
//    string word {"rubbish"};
//    word = adjective;
//    adjective = "twotiming";
//
//    string description {adjective + " " + word + " whippersnapper"};
////    std::cout << description << std::endl;
//
//    string first_name;
//    string last_name;
//
//    std::cout << "Please enter your first name: ";
//    std::cin >> first_name;
//    std::cout << std::endl;
//
//    std::cout << "Please enter your last name: ";
//    std::cin >> last_name;
//    std::cout << std::endl;
//
//    string description {"my name is "};
//    description += first_name + " " + last_name;
//
//    std::cout << description << std::endl;

//    string input;
//
//    std::cout << "Please enter a text: ";
//    std::getline(std::cin, input);
//
//    std::cout << input << std::endl;
//
//    int vowels {};
//    int constants {};
//
//    for(size_t i {}; i < input.length(); ++i) {
//        if(std::isalpha(input[i])) {
//            switch(std::tolower(input[i])){
//            case 'a': case 'e': case 'i': case 'o': case 'u':
//                ++vowels;
//                break;
//            default:
//                ++constants;
//                break;
//            }
//        }
//    }
//
//    std::cout << "there are " << vowels << " vowels and " << constants << " constants." <<std::endl;

//    string name;
//    char choice;
//    std::vector<string> names;
//
//    do {
//        std::cout << "Please enter a name: ";
//        std::cin >> name;
//        names.push_back(name);
//        std::cout << "Do you want to enter another name? ";
//        std::cin >> choice;
//        choice = tolower(choice);
//    }while(choice=='y');
//
//    bool sorted {false};
//    string temp;
//    while(!sorted){
//        sorted = true;
//        for(size_t i {0}; i<names.size()-1; ++i){
//            if(names[i] > names[i+1]) {
//                temp = names[i];
//                names[i] = names[i+1];
//                names[i+1] = temp;
//                sorted = false;
//            }
//        }
//    }
//
//    size_t length {};
//
//    for(auto n:names){
//        if(n.length() > length) {
//            length = n.length();
//        }
//    }
//
//    std::cout << length << std::endl;
//
//    size_t count {};
//    for(auto n:names) {
//        std::cout << std::setw(length+2) << n;
//        ++count;
//        if(count%5 == 0) {
//            std::cout << std::endl;
//        }
//    }

//    string word1 {"A jackhammer"};
//    string word2 {"jack"};
//    int result{ word1.compare(2, word2.length(), word2)};
//    if(!result) {
//        std::cout << "word1 contains " << word2 << " starting at index 2" << std::endl;
//    }

//    string text {"Peter Piper picked a peck of pickled pepper."};
//    string word {"pick"};
//    for (size_t i {}; i < text.length() - word.length() + 1; ++i) {
//        if(!text.compare(i, word.length(), word)) {
//            std::cout << "text contains " << word << " starting at index " << i << std::endl;
//        }
//    }

//    string text {"Peter Piper picked a peck of pickled pepper."};
//    string phrase {"Got to pick a pocket or two."};
////    for(size_t i {}; i < text.length() - 3; ++i) {
////        if(!text.compare(i, 4, phrase, 7, 4)) {
////            std::cout << "text contains " << phrase << " starting at index " << i << std::endl;
////        }
////    }
//
//    for(size_t i {}; i < text.length() - 3; ++i) {
//        if(text.substr(i, 4) == phrase.substr(7, 4)) {
//            std::cout << "text contains " << phrase.substr(7, 4) << " starting at index " << i << std::endl;
//        }
//    }

//    string sentence {"Manners maketh man"};
//    string word {"an"};
//    int count {};
//    size_t position {};
//    for(size_t i {}; i <= sentence.length() - word.length(); ) {
//        position = sentence.find(word, i);
//        if(position == string::npos) {
//            break;
//        }
//        count++;
//        i = position + 1;
//    }
//    std::cout << "\"" << word << "\" occurs in \"" << sentence << "\" " <<count << " times." << std::endl;

//    string text;
//    string word;
//
//    std::cout <<"Please enter text to find the word: " << std::endl;
//    std::getline(std::cin, text);
//    std::cout << "Please enter the word: " << std::endl;
//    std::getline(std::cin, word);
//
//    size_t index {};
//    size_t count {};
//    while(text.find(word, index) != string::npos){
//        ++count;
//        index += word.length();
//    }
//    std::cout << "Your text contained " << count << " occurrences of \"" << word << "\"." << std::endl;

//    string text {"Smith, where Jones had had \"had had\", had had \"had\"." " \"Had had\" had had the examiners' approval."};
//    string separators {" ,.\""};
//    std::cout << text.find_first_of(separators) << std::endl;
//    std::cout << text.find_first_of("AaEeIiOoUu") << std::endl;
//    std::cout << text.find_last_of("AaEeIiOoUu") << std::endl;
//    std::cout << text.find_first_not_of("AaEeIiOoUu") << std::endl;

//    string text;
//    std::cout << "Please enter a text and ended with *:\n " << std::endl;
//    std::getline(std::cin, text, '*');
//    std::cout << text << std::endl;
//
//    std::vector<string> words;
//    string seperator {" ,;:.\"!?'\n"};
//    size_t start {text.find_first_not_of(seperator)};
////    std::cout << start << std::endl;
//    size_t endt {};
//
//    while(start != string::npos) {
//        endt = text.find_first_of(seperator, start+1);
////        std::cout << endt << std::endl;
//        if(endt == string::npos) {
//            endt = text.length();
//        }
//        words.push_back(text.substr(start, endt-start));
//        start = text.find_first_not_of(seperator, endt+1);
////        std::cout << start << std::endl;
//    }
//    std::cout << words.size();
//
//    int count{};
//    for(auto word:words) {
//        std::cout <<std::setw(20)<<word;
//        ++count;
//        if(count%5 == 0){
//            std::cout<< word << std::endl;
//        }
//
//    }

    string sentence {"Manners maketh man"};
    string word {"an"};
    std::cout << sentence.rfind(word) << std::endl;
    std::cout << sentence.rfind("man") << std::endl;
    std::cout << sentence.rfind('e') << std::endl;

    return 0;
}
