#pragma once

#include "iencryptionstrategy.h"
#include <unordered_map>

class ADFGXEncryptionStrategy : public IEncryptionStrategy
{
public:
	ADFGXEncryptionStrategy();
	~ADFGXEncryptionStrategy() override = default;

	std::string encrypt(const char) const override;

private:
	std::unordered_map<char, std::string> mapArray {};
};
