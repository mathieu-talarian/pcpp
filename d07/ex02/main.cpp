#include "Array.class.hpp"
#include <iostream>

int main() {
  srand(time(NULL));
  Array<int> *t = new Array<int>(12);
  try {
    for (unsigned int i = 0; i < 12; i++)
      (*t)[i] = i;
    int i = (*t)[1];
    std::cout << i << std::endl;
  } catch (Array<int>::OutOfLimitsException &e) {
    std::cout << e.what() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  Array<int> *Trick = new Array<int>(42);
  try {
    for (int i = 0; i < 42; i++) {
      (*Trick)[i] = i;
      std::cout << (*Trick)[i] << std::endl;
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  Array<int> *cpy2 = new Array<int>();
  cpy2 = Trick;
  try {
  std::cout << "CPY-> " << (*cpy2)[12] << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  ////////////////////////////////////////////////
  Array<float> v(12);
  for (float y = 0.0f; y < 12.0f; y++) {
    (v)[y] = y + 12.56f;
  }
  try {
    std::cout << static_cast<float>((v)[11]) << std::endl;
  } catch (Array<float>::OutOfLimitsException &e) {
    std::cout << e.what() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  ////////////////////////////////////////////////
  Array<float> vv(v);
  try {
    std::cout << static_cast<float>((vv)[11]) << std::endl;
  } catch (Array<float>::OutOfLimitsException &e) {
    std::cout << e.what() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  Array<float> vvv = vv;
  try {
    std::cout << static_cast<float>((vvv)[11]) << std::endl;
  } catch (Array<float>::OutOfLimitsException &e) {
    std::cout << e.what() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  ////////////////////////////////////////////////
  Array<std::string> strs(1);
  for (size_t i = 0; i < 1; i++) {
    strs[i] = std::string("asdlkfjsadf");
  }
  try {
    std::cout << static_cast<std::string>((strs)[0]) << std::endl;
  } catch (Array<float>::OutOfLimitsException &e) {
    std::cout << e.what() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  ////////////////////////////////////////////////
  delete t;
  delete Trick;
}