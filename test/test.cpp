#include "../src/pole.hpp"

#include <vector>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>


int main() {

std::vector<std::pair<double, double>> tests = {
    std::make_pair(0.0, 1.0),
    std::make_pair(-1.0, 0.5),
    std::make_pair(0.7, 1.5),
};

for (auto test : tests) {
if (pole (test.first, test.second) != test.first * test.second) {
std::cerr << "FAIL: pole(" << test.first<<test.second<< ") is not " << test.first * test.second<< std::endl;
return 1;
}
}
std::cout << "OK" << std::endl;
return 0;
}



