#include <iostream>
#include <stdlib.h>

struct Data {
  std::string s1;
  int n;
  std::string s2;
};

void print(Data *ptr) {
  std::cout << ptr->s1 << std::endl;
  std::cout << ptr->n << std::endl;
  std::cout << ptr->s2 << std::endl;
}

void *serialize() {
  char *str = new char[20]();
  bzero(str, 20);

  int j = (rand() % INT_MAX) * ((rand() % 2 == 0 ? 1 : -1));
  int i;

  for (i = 0; i < 8; i++) {
    char c = (char)((rand() % 74) + 48);
    if (isalnum(c)) {
      str[i] += c;
    } else {
      i--;
    }
  }
  str[i++] = static_cast<char>(j & 0xFF);
  str[i++] = static_cast<char>(j >> 8 & 0xff);
  str[i++] = static_cast<char>(j >> 16 & 0xff);
  str[i++] = static_cast<char>(j >> 24 & 0xff);
  for (; i < 20; i++) {
    char c = (char)((rand() % 74) + 48);
    if (isalnum(c)) {
      str[i] += c;
    } else {
      i--;
    }
  }
  return str;
}

Data *deserialize(void *raw) {
  char *str = reinterpret_cast<char *>(raw);
  Data *ret = new Data;
  for (int i = 0; i < 8; i++) {
    ret->s1 += str[i];
  }
  ret->n = *reinterpret_cast<int *>(str + 8);
  for (int i = 12; i < 20; i++) {
    ret->s2 += str[i];
  }
  return ret;
}

int main(void) {
  std::srand(std::time(0));
  void *seri = serialize();
  Data *ptr = deserialize(seri);
  print(ptr);
  return 0;
}