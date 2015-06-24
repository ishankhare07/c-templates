#include <unordered_map>
#include <iostream>
#include <string>

int main() {
	std::unordered_map <std::string, int> m;
	m["foo"] = 42;
	//std::cout << m <<std::endl;
	std::cout << m["foo"] << std::endl;
	return 0;
}
