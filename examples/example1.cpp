#include "pgnparse/pgnparse.hpp"
#include <iostream>
#include <string>

int main() {
	std::string str { "str" };
	std::cout << "Size: " << pgnparse::splitPgn(str).size() << std::endl;
	return 0;
}
