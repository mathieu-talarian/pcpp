#include "Serializer.class.hpp"
#include <iostream>
#include <stdlib.h>

struct SerData {
  char s1[9];
  int n;
  char s2[9];
};

struct Data {
  std::string s1;
  int n;
  std::string s2;
};

void rand_str(char *s) {
  int i;

  i = 0;
  while (i < 8) {
    while (!isalnum(s[i]))
      s[i] = (char)((rand() % 74) + 48);
    i++;
  }
  s[i] = '\0';
}

void *serialize(void) {
  SerData *dat = new SerData;

  rand_str(dat->s1);
  dat->n = rand() % 9 + 48;
  rand_str(dat->s2);
  return reinterpret_cast<void *>(dat);
}

Data *deserialize(void *ptr) {
  SerData *dat;
  Data *data = new Data;

  dat = reinterpret_cast<SerData *>(ptr);
  data->s1 = static_cast<std::string>(dat->s1);
  data->n = dat->n;
  data->s2 = static_cast<std::string>(dat->s2);
  return (data);
}

int main(void) {
  void *tmp;
  Data *ptr;

  std::srand(std::time(0));
  tmp = serialize();
  ptr = deserialize(tmp);
  std::cout << ptr->s1 << std::endl;
  std::cout << ptr->n << std::endl;
  std::cout << ptr->s2 << std::endl;
  return 0;
