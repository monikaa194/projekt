#include <iostream>

#include "pole.hpp"



int main(int argc, char** argv) {
  if (argc <2) {

    std::cout << "bez parametrow!!!" << std::endl;

  } else {
    std::cout << pole ((std::stod(argv[1])), (std::stod(argv[2])))<< std::endl;
    
  }
  }


