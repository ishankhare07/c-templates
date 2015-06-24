#include <msgpack.hpp>
#include <vector>
#include <string>
#include <iostream>

int main() {
	std::vector<std::string> vec;
	vec.push_back("Hello");
	vec.push_back("MessagePack");

	msgpack::sbuffer sbuf;
	msgpack::pack(sbuf, vec);

	std::cout<<sbuf.data()<<std::endl;

	msgpack::unpacked msg;
	msgpack::unpack(&msg, sbuf.data(), sbuf.size());

	msgpack::object obj = msg.get();
	std::cout << obj << std::endl;

	std::vector<std::string> rvec;
	obj.convert(&rvec);

	return 0;
}
