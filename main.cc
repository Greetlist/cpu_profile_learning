#include <iostream>
#include <string>
#include <vector>

struct Test {
  std::string a;
  double b;
  int c;
};

int main(int argc, char** argv) {
  int size = 2000000;
  //std::vector<Test*>* vec = new std::vector<Test*>(size, nullptr);
  //for (int i = 0; i < size; ++i) {
    //Test* t = new Test();
    //t->a = std::string("test");
    //t->b = 10.13;
    //t->c = 5;
    //(*vec)[i] = t;
  //}

  std::vector<Test*> vec;
  for (int i = 0; i < size; ++i) {
    Test* t = new Test();
    t->a = std::string("test");
    t->b = 10.13;
    t->c = 5;
    vec.push_back(t);
  }
  return 0;
}
