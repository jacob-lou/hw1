#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "ulliststr.h"
using namespace std;

//Use this file to test your ulliststr implementation before running the test suite

int main(int argc, char* argv[])
{
  ULListStr list;
  list.push_back("A");
  cout << "Front: " << list.front() << ", Back: " << list.back() << endl;
  cout << "Size: " << list.size() << endl;
  
  list.push_back("B");
  list.push_back("C");
  cout << "After pushing B, C: " << list.get(0) << " " << list.get(1) << " " << list.get(2) << endl;
  cout << "Back: " << list.back() << endl;

  list.push_back("M");
  list.push_back("N");
  cout<< "after pushing mn ";
  for(size_t i=0; i<list.size(); i++) {
      cout << list.get(i) << " ";
  }
  cout << endl;
  cout << "Front: " << list.front() << endl;

  cout<<"pop back: "<<endl;
  list.pop_back();
  for(size_t i=0; i<list.size(); i++){
      cout << list.get(i) << " ";
  }
  cout << endl;
  cout << "New back: " << list.back() << endl;

  cout<<"pop front: "<<endl;
  list.pop_front();
  for(size_t i=0; i<list.size(); i++) {
      cout << list.get(i) << " ";
  }
  cout << endl;
  cout << "New front: " << list.front() << endl;

  cout<<"pushing alot: "<<endl;
  for(int i=0; i<=20; i++){
    list.push_back(to_string(i));
  }
  for(size_t i=0; i<list.size(); i++) {
      cout << list.get(i) << " ";
  }

  return 0;
}
