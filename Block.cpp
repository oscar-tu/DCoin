#include "sha256.h"
#include <string>
#include <iostream>

// class Block {
// 	public:
// 		Block(int index, std::string hash, std::string previousHash, int timestamp, std::string data);
// 		// std::string calculateHash(int index, std::string previousHash, int timestamp, std::string data);
// 	private:
// 		int index;
// 		std::string hash;
// 		std::string previousHash;
// 		int timestamp;
// 		std::string data;
// }

// Block::Block(int idx, std::string hsh, std::string pHsh, int ts, std::string d) {
// 	std::cout << "Block<" + std::to_string(index) + ">is being created with hash: " + hash << std::endl;
// 	index = idx;
// 	hash = hsh;
// 	previousHash = pHsh;
// 	timestamp = ts;
// 	data = d;
// }

std::string calculateHash(int index, std::string previousHash, int timestamp, std::string data) {
	std::string message = std::to_string(index) + previousHash + std::to_string(timestamp) + data;
	std::cout << "Message is: " + message << std::endl;

	std::string result = sha256(message);

	std::cout << result << std::endl;
	return result;
}

int main() {
	std::string res = calculateHash(1, "816534932c2b7154836da6afc367695e6337db8a921823784c14378abed4f7d7", 1465154705, "testing SHA-256");
	return 0;
}