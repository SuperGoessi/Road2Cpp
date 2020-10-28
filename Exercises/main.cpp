#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main()
{
    std::vector<int> v;
	int temp {};

	std::cin >> temp;

	while (temp != 42)
	{
	    v.push_back(temp);
	    std::cin >> temp;
	}

	for (vector<int>::size_type i {}; i < v.size(); ++i) {
	    std::cout << v.at(i) << std::endl;
	}
	return 0;
}
