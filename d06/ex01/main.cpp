#include <iostream>
#include <stdlib.h>

typedef struct s_data {
  std::string s1;
  int n;
  std::string s2;
} t_data;

void print(t_data *ptr) {
  std::cout << ptr->s1 << std::endl;
  std::cout << ptr->n << std::endl;
  std::cout << ptr->s2 << std::endl;
}

void *serialize() {
  t_data *ret = new t_data;
  for (int i = 0; i < 8; i++) {
    char c = (char)((rand() % 74) + 48);
    if (isalnum(c)) {
      ret->s1 += c;
    } else {
      i--;
    }
  }
  ret->n = rand() % INT_MAX;
  for (int i = 0; i < 8; i++) {
    char c = (char)((rand() % 74) + 48);
    if (isalnum(c)) {
      ret->s2 += c;
    } else {
      i--;
    }
  }
  // print(ret);
  return ret;
}

t_data *deserialize(void *raw) {
  t_data *ret = reinterpret_cast<t_data *>(raw);
  return ret;
}

int main(void) {
  std::srand(std::time(0));
  void *seri = serialize();
  t_data *ptr = deserialize(seri);
  print(ptr);
  delete ptr;
  return 0;
}