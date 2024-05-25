#include "encryption.h"
#include <fstream>
#include <iostream>

Encryption::Encryption(const File& file)
	: file(file)
{}

void Encryption::setStrategy(IEncryptionStrategy::Ptr strategy)
{
	this->strategy = std::move(strategy);
}

void Encryption::encrypt() const
{
	std::ifstream fileStream {file};

	char temp;
	while(fileStream >> temp) {
		std::cout << strategy->encrypt(temp);
	}
	std::cout << '\n';
}

