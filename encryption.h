#pragma once

#include <string>

#include "iencryptionstrategy.h"

class Encryption
{
public:
	using File = std::string;

	Encryption(const File& file);

	void encrypt() const;
	
	void setStrategy(IEncryptionStrategy::Ptr strategy);

private:
	File file;

	IEncryptionStrategy::Ptr strategy {nullptr};
};
