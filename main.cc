#include <iostream>
#include <string>
#include <vector>
#include <random>

#define likely(x)       __builtin_expect((x),1)
#define unlikely(x)     __builtin_expect((x),0)

void func(int add, int& target, bool is_valid) {
  if (is_valid) {
    target += add;
  } else {
    target += 0;
  }
}

int main(int argc, char** argv) {
  int size = 1000000000;
  std::random_device r;
  std::default_random_engine engine(r());
  std::uniform_int_distribution<int> uniform_dist(1, 10);
  int less_than_nine = 0, more_than_nine = 0;
  for (int i = 0; i < size; ++i) {
    int cur = uniform_dist(engine);
    if (likely(cur <= 6)) {
      less_than_nine += 1;
      //func(1, less_than_nine, true);
    } else {
      more_than_nine += 1;
      //func(1, more_than_nine, true);
    }
  }
  std::cout << "Less count is: " << less_than_nine << ", More count is: " << more_than_nine << std::endl;
  return 0;
}
