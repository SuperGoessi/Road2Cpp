#include <iostream>

using namespace std;

void square(int *a){ // the function takes a pointer and replaces the value with its square
  if(a != NULL){
    *a = (*a) * (*a);
  }
}

int main()
{
    int *p;
    *p = 5;
    cout << "The value of p before the function call: " << *p << endl;
    square(&p);
    cout << "The value of p after the function call: " << *p << endl;
}

